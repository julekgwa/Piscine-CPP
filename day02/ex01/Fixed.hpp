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

    int getRawBits(void) const;

    void setRawBits(int const raw);

    float toFloat(void) const;

    int toInt(void) const;
};

//outside of class because it requires the friend modifier when in a class.
std::ostream &operator<<(std::ostream &output, const Fixed &f);

#endif