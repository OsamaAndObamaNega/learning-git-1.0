#include <iostream>
#include "user.h"
#include "hello.h"

int main(){
    std::cout << "main.cpp\n";
    hello("man_o_war",23);
    user("name os the user");

    std::cout << "compile\n";


    if(true){
        std::cout << "hello";
    }
    return 0;
}