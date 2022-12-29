/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:00:31 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/25 16:24:47 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat(){
    type = "Wrong Cat";
     std::cout<<"WrongCat's Constructor Called"<<std::endl;
}

WrongCat::~WrongCat(){
    std::cout<<"WrongAnimal's Destructor Called"<<std::endl;
}

void WrongCat::makeSound()const {
    std::cout<<type <<" = Wrong Cat Sound"<<std::endl;
}