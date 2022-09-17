//
// Created by Usuario on 9/16/2022.
//

#ifndef BASE_CPP_DOCUMENT_H
#define BASE_CPP_DOCUMENT_H

#include <list>
#include "CartItem.h"
#include "Client.h"

using namespace std;

class Document {
protected:
    int date;
    Client* client;
    list<CartItem> cart;
    unsigned long int total;
public:
    Document(int date, Client * client);
    Document(int date, const Client * client);
    Document(Document * doc);

    virtual ~Document();
    int getDate();
    const Client* getClient();
    unsigned long int getTotal();

    void addItem(const string& detail, unsigned int quantity, unsigned int price);
    void addItem(CartItem);
    void clearCart();
};

inline int Document::getDate() {
    return this->date;
}

inline const Client* Document::getClient() {
    return (const Client*) this->client;
}

inline unsigned long int Document::getTotal() {
    return this->total;
}

#endif //BASE_CPP_DOCUMENT_H
