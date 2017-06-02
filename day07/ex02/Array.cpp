//
// Created by julekgwa on 2017/06/01.
//

template<typename T>
Array<T>::Array() : _size(0) {
    this->_array = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    this->_array = new T[n];
}

template<typename T>
Array<T>::~Array() {

}

template<typename T>
Array<T>::Array(Array<T> const &src) {
    *this = src;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs) {
    if (this->_array != NULL)
        delete[] this->_array;
    this->_size = rhs.size();
    this->_array = new T[this->_size];
    for (int i = 0; i < this->_size; ++i) {
        this->_array[i] = rhs[i];
    }
    return *this;
}

template<typename T>
T &Array<T>::operator[](int n) {
    if ((int)this->_size <= n) {
        throw Array<T>::Limit();
    } else
        return this->_array[n];
}

template<typename T>
unsigned int Array<T>::size() {
    return this->_size;
}

template<typename T>
Array<T>::Limit::Limit() {

}

template<typename T>
Array<T>::Limit::~Limit() throw() {

}

template<typename T>
Array<T>::Limit::Limit(Limit const &src) {
    *this = src;
}

template<typename T>
typename Array<T>::Limit &Array<T>::Limit::operator=(Limit const &src) {
    (void)src;
    return *this;
}

template<typename T>
const char *Array<T>::Limit::what() const throw() {
    return "Array out of bounds";
}

template<typename T>
void *Array<T>::operator new(size_t t) {
    return new T[t];
}