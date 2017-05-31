//
// Created by julekgwa on 2017/05/31.
//

#include <iostream>

#include "Convert.hpp"

int main(int ac, char const *av[]) {
    if (ac == 2) {
        Convert a(av[1]);
        std::cout << a << std::endl;
    }
    return 0;
}
