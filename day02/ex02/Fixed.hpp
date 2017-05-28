#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int _fixedPoint;
    static int const _fractBits;

public:
    Fixed(void);

    Fixed(const Fixed &copy);

    Fixed(const int val);

    Fixed(const float val);

    ~Fixed(void);

    void operator=(const Fixed &copy);

    bool operator<(const Fixed &copy);

    bool operator>(const Fixed &copy);

    bool operator<=(const Fixed &copy);

    bool operator>=(const Fixed &copy);

    bool operator==(const Fixed &copy);

    bool operator!=(const Fixed &copy);

    Fixed &operator+(const Fixed &copy);

    Fixed &operator-(const Fixed &copy);

    Fixed &operator*(const Fixed &copy);

    Fixed &operator/(const Fixed &copy);

    Fixed &operator++();

    Fixed operator++(int);

    Fixed &operator--();

    Fixed operator--(int);

    int getRawBits(void) const;

    void setRawBits(int const raw);

    float toFloat(void) const;

    int toInt(void) const;

    const static Fixed &min(const Fixed &a, const Fixed &b);

    static Fixed &min(Fixed &a, Fixed &b);

    static Fixed &max(Fixed &a, Fixed &b);

    const static Fixed &max(const Fixed &a, const Fixed &b);
};

//outside of class because it requires the friend modifier when in a class.
std::ostream &operator<<(std::ostream &output, const Fixed &f);

#endif