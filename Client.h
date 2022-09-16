//
// Created by Usuario on 9/16/2022.
//

#ifndef BASE_CPP_CLIENT_H
#define BASE_CPP_CLIENT_H

#include <string>

using namespace std;

class Client {
private:
    string name;
    int id;
public:
    Client(string name, int id);
    ~Client();
    string getName();
    int getId();
};

inline string Client::getName() {
    return this->name;
}

inline int Client::getId() {
    return this->id;
}


#endif //BASE_CPP_CLIENT_H
