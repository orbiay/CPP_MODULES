/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:50:46 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/25 16:24:32 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    type = "No Value";
    std::cout<<"WrongAnimal's Constructor Called"<<std::endl;
}
WrongAnimal::~WrongAnimal(){
    std::cout<<"WrongAnimal's Destructor Called"<<std::endl;
}
WrongAnimal::WrongAnimal(std::string& name){
    type = name;
    std::cout<<"WrongAnimal's Paramitrized Called"<<std::endl;
}
WrongAnimal::WrongAnimal( const WrongAnimal& obj ){
    *this = obj;
    std::cout<<"WrongAnimal's Copy Constructor Called"<<std::endl;
}
WrongAnimal& WrongAnimal::operator=( const WrongAnimal& obj ){
    this->type = obj.type;
    std::cout<<"WrongAnimal's Copy Assigngmmet Constructor Called"<<std::endl;
    return(*this);
}
void WrongAnimal::makeSound(void) const{
    std::cout<< type <<" = Wrong Animal Sound"<<std::endl;
}
std::string WrongAnimal::getType(void) const{
    return type;
}