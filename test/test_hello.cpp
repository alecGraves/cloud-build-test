//
// Created by Alec Graves on 11/6/19.
//

#include <iostream>
#include "hello.h"


int main() {
    auto hello = Hello();
    if (hello.speak() == "Hello, world!") {
        std::cout << "\033[32;1m" << "test_hello Success" << "\033[0m\n" << std::endl;
        return 0;
    } else {
        std::cout << "\033[31;1m" << "test_hello Error: hello string did not match" << "\033[0m\n" << std::endl;
        return 1;
    }
}