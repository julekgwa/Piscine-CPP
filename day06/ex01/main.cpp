//
// Created by Junius LEKGWARA on 2017/05/31.
//

#include <iostream>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

std::string randomString(size_t len) {
    std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string newstr;
    int pos;
    while (newstr.size() != len) {
        pos = ((rand() % (str.size() - 1)));
        newstr += str.substr(pos, 1);
    }
    return newstr;
}

void *serialize(void) {
    Data *p = new Data;
    p->s1 = randomString(8);
    p->n = (rand() % 100) + 1;
    p->s2 = randomString(8);
    return p;
}

Data *deserialize(void *raw) {
    return static_cast<Data *>(raw);
}

int main() {
    srand((unsigned) time(0));
    void *raw = serialize();
    std::cout << "Serialized data: " << raw << std::endl;
    Data *d = deserialize(raw);
    std::cout << "==========================\nDeserialized data: " << std::endl;
    std::cout << "s1: " << d->s1
              << ", n: " << d->n
              << ", s2" << d->s2 << std::endl;
}
