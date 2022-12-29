/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:38:29 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/23 14:42:31 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include<iostream>

class Fixed{
    int fixed_p;
    const static int fractional_b = 8;
public:
    Fixed();
    Fixed(const Fixed& obj);
    Fixed& operator=(const Fixed& obj);
    ~Fixed();
    int getRawBits(void) const ;
    void setRawBits(int const Raw);
};

#endif