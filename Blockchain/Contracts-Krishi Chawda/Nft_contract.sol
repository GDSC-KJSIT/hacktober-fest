// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

// Import the openzepplin contracts
import "@openzeppelin/contracts/token/ERC721/ERC721.sol";

contract DemoNft is ERC721 {
    address payable public owner;

    modifier onlyOwner() {
        require(msg.sender = owner);
    }

    constructor() ERC721("GDSC", "ITM") {
        owner = msg.sender;
    }

    function _baseURI() internal view virtual override returns (string memory) {
        return baseTokenURI;
    }

    function safeMint(address payable to, string memory uri) public onlyOwner {
        uint256 tokenId = currentTokenId.current();
        currentTokenId.increment();
        _safeMint(to, tokenId);
        _setTokenURI(tokenId, uri);
        transferOwnership(to);
    }

    function burn(uint256 tokenId) public {
        super._burn(tokenId);
    }
}
