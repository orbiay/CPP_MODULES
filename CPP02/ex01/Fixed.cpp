/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:38:27 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/23 14:36:44 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	fixed_p = 0;
	std :: cout << "Default constructor called" << std :: endl;
}

Fixed::Fixed(const Fixed& obj){
	this->fixed_p = obj.fixed_p;
	std ::cout << "Copy constructor called"  << std :: endl;
}

Fixed& Fixed::operator=(const Fixed& obj){
	std :: cout << "Copy assignment operator called" << std :: endl;
	this->fixed_p = obj.fixed_p;
	return *this;
}

Fixed::~Fixed(){
	std :: cout << "Destructor called" << std :: endl;
}

Fixed::Fixed(const int num)
{
	fixed_p = num << fractional_b;
	std :: cout <<"Int constructor called" << std ::endl;
}

Fixed::Fixed(const float num1)
{
	fixed_p = roundf(num1 * (1 << fractional_b));
	std :: cout <<"Float constructor called" << std:: endl;
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
//(sign) + (exponene) * 8 + (mantisa) * 23 ) 32 bits
//(sign) + (exponene) * 11 + (mantisa) * 52 ) 64 bits