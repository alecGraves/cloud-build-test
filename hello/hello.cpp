//
// Created by Alec Graves on 11/6/19.
//

#include <iostream>
#include "hello.h"

Hello::Hello() : hello_string("Hello, world!") {
    std::cout << "Hello class instantiated!" << std::endl;
}

std::string Hello::speak() {
    std::cout << hello_string << std::endl;
    return hello_string;
}