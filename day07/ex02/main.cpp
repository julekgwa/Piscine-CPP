//
// Created by julekgwa on 2017/06/01.
//

#include "Array.hpp"
#include <iostream>

int main(void) {
    Array<int> i(3);
    Array<char> c(3);
    Array<std::string> s(3);
    std::cout << "Size of Array<int> i(3): " << i.size() << "\n"
              << "Size of Array<char> c(3): " << c.size() << "\n"
              << "Size of Array<std::string> s(3): " << s.size() << std::endl;
    std::cout << "Assigning values to s(3), s[0] = \"one\", s[1] = \"two\", s[2] = \"three\"" << std::endl;
    s[0] = "one";
    s[1] = "two";
    s[2] = "three";

    for (size_t j = 0; j < s.size(); ++j) {
        std::cout << "\ts[" << j << "] -> "  << s[j] << std::endl;
    }
    std::cout << "Assigning values to c(3), c[0] = 'p', c[1] = 'i', c[2] = 'e'" << std::endl;
    c[0] = 'p';
    c[1] = 'i';
    c[2] = 'e';
    for (size_t k = 0; k < c.size(); ++k) {
        std::cout << "\tc[" << k << "] -> " << c[k] << std::endl;
    }
    std::cout << "Assigning values to i(3),  i[0] = 12, i[1] = 23, i[2] = 24" << std::endl;
    i[0] = 12;
    i[1] = 23;
    i[2] = 24;
    for (size_t l = 0; l < i.size(); ++l) {
        std::cout << "\ti[" << l << "] -> " << i[l] << std::endl;
    }
    return 0;
}