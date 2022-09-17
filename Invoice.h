//
// Created by Usuario on 9/16/2022.
//

#ifndef BASE_CPP_INVOICE_H
#define BASE_CPP_INVOICE_H

#include "Document.h"
#include "Quote.h"

using namespace std;

class Invoice : public Document {
private:
    float tax;
public:
    Invoice(int date, Client* client);
    Invoice(Quote quote);
    ~Invoice();

    unsigned long int calculateTax();
};


#endif //BASE_CPP_INVOICE_H
