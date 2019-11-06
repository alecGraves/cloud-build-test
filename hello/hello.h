//
// Created by Alec Graves on 11/6/19.
//

#ifndef CLOUD_BUILD_TEST_HELLO_H
#define CLOUD_BUILD_TEST_HELLO_H
#include <string>

class Hello {
private:
    const std::string hello_string;
public:
    Hello();
    std::string speak();
};


#endif //CLOUD_BUILD_TEST_HELLO_H
