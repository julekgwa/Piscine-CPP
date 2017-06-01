//
// Created by julekgwa on 2017/06/01.
//

template <class T>
//#include "Array.hpp"
Array<T>::Array() : _size(0) {
    this->_array = NULL;
}

template <class T>
Array<T>::Array(unsigned int n) : _size(n) {
    this->_array = new T[n];
}

//Array<T>::Array(Array<T> const &src) {
//    *this = src;
//}
template <class T>
Array<T>::Array(Array<T> const &src) {
    *this = src;
}

template <class T>
Array<T> &Array<T>::operator=(Array<T> const &rhs) {
    if (this->_array != NULL)
        delete[] this->_array;
    this->_size = rhs.length();
    this->_array = new T[this->_size];
    for (int i = 0; i < this->_size; ++i) {
        this->_array[i] = rhs[i];
    }
    return *this;
}

template <class T>
T &Array<T>::operator[](int n) {
    if (this->_size <= static_cast<unsigned int>(n)) {
        throw Array<T>::Limit();
    } else
        return this->_array[n];
}

template <class T>
unsigned int Array<T>::size(){
    return this->_size;
}

template <class T>
Array<T>::Limit::Limit() {

}

template <class T>
Array<T>::Limit::~Limit() throw() {

}

template <class T>
Array<T>::Limit::Limit(Limit const &src) {
    *this = src;
}

template <class T>
Array::Limit &Array<T>::Limit::operator=(Limit const &src) {
    *this = src;
    return *this;
}

template <class T>
const char* Array<T>::Limit::what() const throw() {
    return "Array out of bounds";
}

template <class T>
void *Array<T>::operator new(size_t t) {
    return new T[t];
}