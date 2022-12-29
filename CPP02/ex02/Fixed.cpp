/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:16:00 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/23 15:03:01 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	fixed_p = 0;
}

Fixed::Fixed(const Fixed& obj){
	this->fixed_p = obj.fixed_p;
}

Fixed& Fixed::operator=(const Fixed& obj){
	this->fixed_p = obj.fixed_p;
	return *this;
}

Fixed::~Fixed(){
}

Fixed::Fixed(const int num)
{
	fixed_p = num * (1 << fractional_b);
}

Fixed::Fixed(const float num1)
{
	fixed_p = roundf(num1 * (1 << fractional_b));
}

int Fixed::getRawBits(void) const {
	return fixed_p;
}

void Fixed::setRawBits(int const Raw){
	fixed_p = Raw;
}


float Fixed::toFloat(void) const
{
	return ((float)fixed_p / (float)(1 << fractional_b));
}

int Fixed::toInt(void)const{
	return (fixed_p / (1 << fractional_b));
}

std::ostream &operator<<(std::ostream &out, const Fixed& obj){
	out << obj.toFloat();
//toFloat bach nprantiwhom kamlin as float danc li asalen float ghadi tkoun fihoum lfassila li int ila raja3nahom float maghadich nal9aw lfasilla
	return (out);
}

bool Fixed::operator==(const Fixed& obj2){
        if ( this->fixed_p == obj2.fixed_p)
            return true;
        else 
            return false;
}

bool Fixed::operator>(const Fixed& obj2){
        if ( this->fixed_p > obj2.fixed_p)
            return true;
        else 
            return false;
}

bool Fixed::operator<(const Fixed& obj2){
        if ( this->fixed_p < obj2.fixed_p)
            return true;
        else 
            return false;
}

bool Fixed::operator>=(const Fixed& obj2){
        if ( this->fixed_p >= obj2.fixed_p)
            return true;
        else 
            return false;
}

bool Fixed::operator<=(const Fixed& obj2){
        if ( this->fixed_p <= obj2.fixed_p)
            return true;
        else 
            return false;
}
bool Fixed::operator!=(const Fixed& obj2){
        if ( this->fixed_p != obj2.fixed_p)
            return true;
        else 
            return false;
}

Fixed Fixed::operator*(const Fixed& obj){
      Fixed newobj;
      newobj.fixed_p = ((this->fixed_p * obj.fixed_p) / (1 << obj.fractional_b));
      return newobj;  
}
//kan9ssem 3la 256 7itach 7itach lwel mchifty b 8 o tani mchifty b 8 ya3ni ila drabt hom bjouj ghadi nwali mchifty b 16 dakchi 3lachi kan9sem 3la 8

Fixed Fixed::operator+(const Fixed& obj){
      Fixed newobj;
      newobj.fixed_p = this->fixed_p + obj.fixed_p;
      return newobj;  
}

Fixed Fixed::operator-(const Fixed& obj){
      Fixed newobj;
      newobj.fixed_p = this->fixed_p - obj.fixed_p;
      return newobj;  
}

Fixed Fixed::operator/(const Fixed& obj){
      Fixed newobj;
      newobj.fixed_p = ((this->fixed_p * (1 << fractional_b)) / (obj.fixed_p));
      std::cout<< obj.fixed_p << std::endl;
      return newobj;  
}
//kan dreb f 256 7itach lwel mdarob 256 / 3la tani madrob 156 ghadi yw9e3 lina lkhtizal dakchi 3lach kan3awd nchifty b 156

Fixed	&Fixed::operator ++(){
	fixed_p++;
	return (*this);
}


Fixed &Fixed::operator --(){
    fixed_p--;
    return *this;
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2){
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj2);
	else
		return (obj1);		
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2){
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj2);
	else
		return (obj1);		
}

Fixed Fixed::operator --(int){
    Fixed Temp = *this;
    fixed_p--;
    return Temp;
}
 
Fixed	Fixed::operator ++(int){
    Fixed temp = *this;
	fixed_p++;
	return (temp);
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj2);
	else
		return (obj1);
}

const Fixed &Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}
