//
// Created by Usuario on 9/16/2022.
//

#include "Document.h"

Document::Document(int date, Client *client) {
    this->date = date;
    this->client = client;
    this->total = 0;
    this->cart.clear();
}

Document::Document(int date, const Client *client) {
    this->date = date;
    this->client = (Client*) client;
    this->total = 0;
    this->cart.clear();
}

Document::Document(Document * doc) {
    this->date = doc->getDate();
    this->client = (Client*) doc->getClient();
    this->total = doc->total;
    //std::copy(this->cart.begin(), this->cart.end(), doc->cart);
    auto iter = doc->cart.begin();
    for (int i = 0; i < doc->cart.size(); i++){
        this->cart.push_front(iter.operator*());
        iter.operator++();
    }
}

Document::~Document() {
    this->cart.clear();
}

void Document::addItem(const string& detail, unsigned int quantity, unsigned int price) {
    CartItem item(detail, quantity, price);
    this->cart.push_front(item);
    this->total += item.getSubtotal();
}

void Document::addItem(CartItem item) {
    this->cart.push_front(item);
    this->total += item.getSubtotal();
}

void Document::clearCart() {
    this->cart.clear();
    this->total = 0;
}