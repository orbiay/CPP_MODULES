/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:45:52 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/25 16:23:36 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include<iostream>
class WrongAnimal{
protected:
    std::string type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(std::string& name);
    WrongAnimal( const WrongAnimal& obj );
    WrongAnimal& operator=( const WrongAnimal& obj );
    void makeSound(void)const;
    std::string getType(void)const;
};
#endif