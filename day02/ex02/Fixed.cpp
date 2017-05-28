#include "Fixed.hpp"

int const Fixed::_fractBits = 8;

Fixed::Fixed(void) {
    _fixedPoint = 0;
}

Fixed::Fixed(const Fixed &copy) {
    *this = copy;
}

Fixed::Fixed(const int val) {
    _fixedPoint = val * (2 << (_fractBits - 1));
}

Fixed::Fixed(const float val) {
    _fixedPoint = roundf(val * (2 << (_fractBits - 1)));
}

Fixed::~Fixed(void) {
}

void Fixed::operator=(const Fixed &copy) {
    _fixedPoint = copy.getRawBits();
}

bool Fixed::operator<(const Fixed &copy) {
    if (copy.getRawBits() > _fixedPoint)
        return (true);
    return (false);
}

bool Fixed::operator>(const Fixed &copy) {
    if (copy.getRawBits() < _fixedPoint)
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed &copy) {
    if (copy.getRawBits() >= _fixedPoint)
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed &copy) {
    if (copy.getRawBits() <= _fixedPoint)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed &copy) {
    if (copy.getRawBits() == _fixedPoint)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed &copy) {
    if (copy.getRawBits() != _fixedPoint)
        return (true);
    return (false);
}

Fixed &Fixed::operator+(const Fixed &copy) {
    _fixedPoint += copy.getRawBits();
    return (*this);
}

Fixed &Fixed::operator-(const Fixed &copy) {
    _fixedPoint -= copy.getRawBits();
    return (*this);
}

Fixed &Fixed::operator*(const Fixed &copy) {
    _fixedPoint *= copy.toFloat();
    return (*this);
}

Fixed &Fixed::operator/(const Fixed &copy) {
    _fixedPoint /= copy.toFloat();
    return (*this);
}

Fixed &Fixed::operator++() {
    ++_fixedPoint;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed &Fixed::operator--() {
    --_fixedPoint;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return (tmp);
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
    return (_fixedPoint / (2 << (_fractBits - 1)));
}

std::ostream &operator<<(std::ostream &output, const Fixed &f) {
    output << f.toFloat();
    return output;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (b);
    else if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (b);
    else if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else if (a.getRawBits() < b.getRawBits())
        return (b);
    else
        return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else if (a.getRawBits() < b.getRawBits())
        return (b);
    else
        return (a);
}