//
// Created by Usuario on 9/16/2022.
//

#include "Document.h"

Document::Document(int date, Client *client) {
    this->date = date;
    this->client = client;
}

Document::Document(int date, const Client *client) {
    this->client = (Client*) client;
}

Document::~Document() {
    this->cart.clear();
}

void Document::addItem(const string& detail, unsigned int quantity, unsigned int price) {
    this->cart.push_front(CartItem(detail, quantity, price));
}

void Document::addItem(CartItem item) {
    this->cart.push_front(item);
}

void Document::clearCart() {
    this->cart.clear();
}