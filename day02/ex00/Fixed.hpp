#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _fixedPoint;
        static int const _fractBits;
    public:
        Fixed( void );
        Fixed( const Fixed &copy);
        ~Fixed( void );
        void operator = (const Fixed &copy ); 
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif