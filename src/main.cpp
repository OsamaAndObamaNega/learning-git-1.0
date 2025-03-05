#include <iostream>
#include "user.h"
#include "hello.h"

int main(){
    std::cout << "main.cpp\n";
    hello();
    user("name os the user");

    return 0;
}