// SPDX-License-Identifier : MIT

pragma solidity 0.8.9;

contract Lottery {
    // State Variables
    address[] public players;
    address public owner;

    constructor() {
        owner = msg.sender;
    }

    function participate() public payable {
        require(msg.value >= 0.1 ether, "Insufficient funds");

        players.push(msg.sender);
    }

    // Since there is no optimal way of random number generation in solidity we have to use the keccak256 hash function.

    function randomNumberGeneration() public view returns (uint256) {
        return
            uint256(
                keccak256(
                    abi.encodePacked(block.difficulty, block.timestamp, players)
                )
            );
    }

    // A modifier which ensures that the function is called only by the user.
    modifier onlyOwner() {
        require(msg.sender == owner);
        _;
    }

    function selectWinner() public onlyOwner {
        uint256 winner = randomNumberGeneration() % players.length;
        (bool sent, ) = players[winner].call{value: address(this).balance}("");
        require(sent, "Error");
        players = new address[](0);
    }

    // Returns the player's address.
    function getPLayers() public view returns (address[] memory) {
        return players;
    }

    // Incase msg.data is present or receive is not declared
    fallback() external payable {}

    // Incase msg.data is empty
    receive() external payable {}
}
