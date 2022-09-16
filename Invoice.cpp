//
// Created by Usuario on 9/16/2022.
//

#include "Invoice.h"

Invoice::Invoice(int date, Client *client) : Document(date, client) {

}

Invoice::Invoice(Quote quote) : Document(quote.getDate(), quote.getClient()) {}