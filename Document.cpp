//
// Created by Usuario on 9/16/2022.
//

#include "Document.h"

Document::Document(int date, Client *client) {
    this->date = date;
    this->client = client;
}

Document::~Document() = default;