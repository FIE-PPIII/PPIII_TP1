//
// Created by Usuario on 9/16/2022.
//

#include "CartItem.h"

#include <utility>

using namespace std;

CartItem::CartItem(string detail, unsigned int quantity, unsigned int price) {
    this->detail = std::move(detail);
    this->quantity = quantity;
    this->price = price;
}

CartItem::CartItem(string detail, unsigned int quantity, float price) {
    this->detail = std::move(detail);
    this->quantity = quantity;
    this->price = (unsigned int) (100 * price);
}

CartItem::~CartItem() = default;

unsigned long int CartItem::getSubtotal() {
    return this->price * this->quantity;
}
