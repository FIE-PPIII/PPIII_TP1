//
// Created by Usuario on 9/16/2022.
//

#ifndef BASE_CPP_DOCUMENT_H
#define BASE_CPP_DOCUMENT_H

#include <list>
#include "CartItem.h"

using namespace std;

class Document {
private:
    int date;
    Client* client;
    list<CartItem> cart;
    unsigned long int total;
public:
    Document();
    virtual ~Document();
};


#endif //BASE_CPP_DOCUMENT_H
