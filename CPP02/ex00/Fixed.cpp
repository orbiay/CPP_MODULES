/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:38:27 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/23 14:45:36 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	fixed_p = 0;
	std :: cout << "Default constructor called" << std :: endl;
}

Fixed::Fixed(const Fixed &obj){
	std ::cout << "Copy constructor called"  << std :: endl;
	fixed_p = obj.getRawBits();
}

int Fixed::getRawBits(void) const {
	std :: cout<< "getRawBits member function called" << std :: endl;
	return fixed_p;
}

Fixed &Fixed::operator=(const Fixed& obj){
	std :: cout << "Copy assignment operator called" << std :: endl;
	this->fixed_p = obj.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	std :: cout << "Destructor called" << std :: endl;
}


void Fixed::setRawBits(int const Raw){
	fixed_p = Raw;
}