// SPDX-License-Identifer : MIT

pragma solidity 0.8.9;

contract Ecommerce {
    // State Variables
    address public buyer;

    constructor() {
        buyer = msg.sender;
    }

    // A struct to create a Product
    struct Product {
        uint256 id;
        uint256 value;
        uint256 rating;
        string name;
        address payable seller;
        uint256 warranty_period;
    }

    Product[] public products;

    function buyProduct(uint256 prod_index) public payable {
        uint256 amount = msg.value;

        require(
            amount == products[prod_index].value,
            "Send the correct amount"
        );

        address prod_seller = products[prod_index].seller;

        (bool sent, ) = prod_seller.call{value: amount}("");

        require(sent, "Transaction incomplete");
    }

    function sellProduct(
        uint256 _id,
        uint256 _value,
        uint256 _rating,
        string memory _name,
        address payable _seller,
        uint256 _warranty
    ) public {
        products.push(Product(_id, _value, _rating, _name, _seller, _warranty));
    }

    function getProducts() public view returns (Product[] memory) {
        return products;
    }

    // Incase msg.data is present or receive is not declared
    fallback() external payable {}

    // Incase msg.data is empty
    receive() external payable {}
}
