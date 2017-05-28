/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktshikot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 07:55:51 by ktshikot          #+#    #+#             */
/*   Updated: 2017/05/25 07:55:52 by ktshikot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
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
  Fixed& operator+(const Fixed &copy);
  Fixed& operator-(const Fixed &copy);
  Fixed& operator*(const Fixed &copy);
  Fixed& operator/(const Fixed &copy);
  Fixed& operator++();
  Fixed operator++(int);
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
  const static Fixed& max( Fixed& a, const Fixed& b);
};
//outside of class because it requires the friend modifier when in a class.
std::ostream &operator<<(std::ostream &output, const Fixed &f);
#endif