/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:15:44 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/24 10:25:50 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap(){
    hit_p = 100;
    energy_p = 100;
    attack_D = 30;
    std::cout<<"{ FragTra } " << name << " Default Constructor Called"<<std::endl;
}

FragTrap::~FragTrap(){
    std::cout<<"{ FragTrap } " <<name << " Destructor Called" << std::endl; 
}

FragTrap::FragTrap(std::string& name)
{
    hit_p = 100;
    energy_p = 100;
    attack_D = 30;
    this->name = name;
    std::cout <<"{ FragTrap } "<<name <<" Parameterized Constructor Called" <<std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
    this->attack_D = obj.attack_D;
    this->energy_p = obj.energy_p;
    this->hit_p = obj.hit_p;
    this->name = obj.name;
    std::cout <<"{ FragTrap } " <<name << " Copy Constructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj){
    this->attack_D = obj.attack_D;
    this->energy_p = obj.energy_p;
    this->hit_p = obj.hit_p;
    this->name = obj.name;
    std::cout <<"{ FragTrap } " <<name << " Copy Assingment Constructor Called"<< std::endl;
    return(*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "{ FragTrap } " << name << " High Five guys" << std::endl;
}