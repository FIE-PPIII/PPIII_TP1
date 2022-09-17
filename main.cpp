#include <iostream>
#include <list>
#include "Quote.h"
#include "Invoice.h"


using namespace std;

int main()
{
    Client client1("Juan Bautista", 124);
    Quote quote1(20220916, &client1);
    quote1.addItem("Coke", 10, 400);
    Invoice invoice1(quote1);

    cout<<invoice1.getClient()->getName()<<endl;
    unsigned long int integerTotal = invoice1.getTotal()/100;
    unsigned short int decimalTotal;
    decimalTotal = (unsigned short int) (invoice1.getTotal() - integerTotal*100);
    cout<<"$"<<integerTotal<<"."<<decimalTotal<<endl;
    printf("$%.2f", ((float) invoice1.calculateTax())/100);

    return 0;
}
