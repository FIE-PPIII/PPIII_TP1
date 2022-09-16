//
// Created by Usuario on 9/16/2022.
//

#ifndef BASE_CPP_CARTITEM_H
#define BASE_CPP_CARTITEM_H

#include <string>

using namespace std;

class CartItem {
private:
    string detail;
    unsigned int quantity;
    unsigned int price;
public:
    CartItem(string detail, unsigned int quantity, unsigned int price);
    CartItem(string detail, unsigned int quantity, float price);
    string getDetail();
    unsigned int getQuantity();
    unsigned int getPrice();
    unsigned long int getSubtotal();
};


#endif //BASE_CPP_CARTITEM_H
