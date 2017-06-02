//
// Created by julekgwa on 2017/06/01.
//

#include <iostream>
#include <exception>

template<typename T>
class Array {
public:
    Array<T>(void);

    Array<T>(unsigned int);

    ~Array<T>();

    Array<T>(Array<T> const &src);

    Array<T> &operator=(Array<T> const &rhs);

    unsigned int size();

    T &operator[](int n);

    void *operator new(size_t t);

    class Limit: public std::exception {
    public:
        virtual ~Limit() throw();

        Limit();

        Limit(Limit const &src);

        Limit &operator=(Limit const &src);

        virtual const char *what() const throw();

    };

private:
    unsigned int _size;
    T *_array;
};

#include "Array.cpp"