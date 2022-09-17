//
// Created by Usuario on 9/16/2022.
//

#ifndef BASE_CPP_QUOTE_H
#define BASE_CPP_QUOTE_H

#include "Document.h"

using namespace std;

class Quote : public Document {
private:
    int expirationDate;
public:
    Quote(int date, int expirationDate, Client * client);
    Quote(int date, Client * client);
    ~Quote();


};


#endif //BASE_CPP_QUOTE_H
