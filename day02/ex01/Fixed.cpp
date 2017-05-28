#include "Fixed.hpp"

int const Fixed::_fractBits = 8;

Fixed::Fixed(void) {
    _fixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int val) {
    std::cout << "Int constructor called" << std::endl;
    _fixedPoint = val * ((2 << (_fractBits - 1)));
}

Fixed::Fixed(const float val) {
    std::cout << "Float constructor called" << std::endl;
    _fixedPoint = roundf(val * (2 << (_fractBits - 1)));
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed &copy) {
    std::cout << "Assignation operator called" << std::endl;
    _fixedPoint = copy.getRawBits();
}

int Fixed::getRawBits(void) const {
    return (_fixedPoint);
}

void Fixed::setRawBits(int const raw) {
    _fixedPoint = raw;
}

float Fixed::toFloat(void) const {
    return (_fixedPoint / (roundf(2 << (_fractBits - 1))));
}

int Fixed::toInt(void) const {
    return (_fixedPoint / ((2 << (_fractBits - 1))));
}

std::ostream &operator<<(std::ostream &output, const Fixed &f) {
    output << f.toFloat();
    return output;
}