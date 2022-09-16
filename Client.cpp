//
// Created by Usuario on 9/16/2022.
//

#include "Client.h"

#include <utility>

using namespace std;

Client::Client(string name, int id) {
    this->name = std::move(name);
    this->id = id;
}

Client::~Client() = default;