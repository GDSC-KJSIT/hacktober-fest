// SPDX-License-Identifer : MIT

pragma solidity 0.8.9;

import "@openzeppelin/contracts/token/ERC20/ERC20.sol";

contract Erc {
    address private creator;

    constructor(uint256 initialSupply) public ERC20("Token", "TKN") {
        _mint(msg.sender, initialSupply);
        creator = msg.sender;
    }

    function getTotalSupply(address adr) public returns (uint256) {
        return IERC20(adr).totalSupply();
    }

    function getBalance(address adr) public returns (uint256) {
        return balanceOf(adr);
    }
}
