/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:15:47 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/21 19:14:19 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include<iostream>
#include<cmath>
class Fixed{
    int fixed_p;
    const static int fractional_b = 8;
public:
    Fixed();
    bool operator== (const Fixed& obj2);
    Fixed(const Fixed& obj);
    Fixed& operator=(const Fixed& obj);
    Fixed operator*(const Fixed& obj);
    Fixed operator/(const Fixed& obj);
    bool operator >(const Fixed& obj2);
    bool operator!=(const Fixed& obj2);
    bool operator<=(const Fixed& obj2);
    bool operator>=(const Fixed& obj2);
    Fixed operator+(const Fixed& obj);
    Fixed operator-(const Fixed& obj);
    bool operator<(const Fixed& obj2);
    static const Fixed& min(const Fixed& obj1,const Fixed& obj2);
    static Fixed& min(Fixed& obj1,Fixed& obj2);
    static const Fixed& max(const Fixed& obj1,const Fixed& obj2);
    static Fixed& max(Fixed& obj1,Fixed& obj2);
    Fixed	&operator ++();
    Fixed	operator ++(int);
    Fixed &operator --();
    Fixed operator --(int);
    Fixed(const int num);
    Fixed(const float num1);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const Raw);
    float toFloat(void)const;
    int toInt(void)const;
};
    std::ostream &operator<<(std::ostream &out, const Fixed & obj);

#endif