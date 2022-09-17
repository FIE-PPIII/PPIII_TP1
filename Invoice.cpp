//
// Created by Usuario on 9/16/2022.
//

#include "Invoice.h"
#define TAX 21

Invoice::Invoice(int date, Client *client) : Document(date, client) {

}

Invoice::Invoice(Quote quote) : Document((Document*) &quote) {}

Invoice::~Invoice() {

}

unsigned long int Invoice::calculateTax(){
    return this->total * TAX / 100;
}