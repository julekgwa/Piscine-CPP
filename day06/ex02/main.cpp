//
// Created by Junius LEKGWARA on 2017/05/31.
//

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
    int i = (rand() % 3);
    if (i == 0)
        return new A();
    else if (i == 2)
        return new B();
    else
        return new C();
}

void identify_from_pointer(Base *p) {
    if (dynamic_cast<A *>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B *>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C *>(p)) {
        std::cout << "C" << std::endl;
    }
}

void identify_from_reference(Base &p) {
    int a = 0, b = 0, c = 0;
    try {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        a = 1;
    }catch (std::bad_cast &e) {
        a = 0;
    }
    if (a)
        return;
    try {
        (void)dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        b = 1;
    }catch (std::bad_cast &e) {
        b = 0;
    }
    if (b)
        return;
    try {
        (void)dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        c = 1;
    }catch (std::bad_cast &e) {
        c = 0;
    }

}

int main(void) {
    srand((unsigned) time(0));
    Base *p = generate();
    identify_from_pointer(p);
    identify_from_reference(*p);
    delete p;
    return 0;
}