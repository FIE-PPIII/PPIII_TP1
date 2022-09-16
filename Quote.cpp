//
// Created by Usuario on 9/16/2022.
//

#include "Quote.h"

Quote::Quote(int date, int expirationDate, Client *client) : Document(date, client) {
    this->expirationDate = expirationDate;
}

Quote::Quote(int date, Client *client) : Document(date, client) {

}

Quote::~Quote() {};
