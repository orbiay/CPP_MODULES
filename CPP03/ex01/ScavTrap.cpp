/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:19:17 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/24 14:23:10 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include"ClapTrap.hpp"

ScavTrap::ScavTrap(){
    hit_p = 100;
    energy_p = 50;
    attack_D = 20;
    std::cout<< "{ ScavTrap } "<< name << " Constructor Called " << std::endl;
}

ScavTrap::ScavTrap(std::string& name)
{
    this->name = name;
    hit_p = 100;
    energy_p = 50;
    attack_D = 20;
    std::cout << "{ ScavTrap } "<< name <<  " Parameterized  Constructor Called "<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj){
    this->name = obj.name;
    this->hit_p = obj.hit_p;
    this->attack_D = obj.attack_D;
    this->energy_p = obj.energy_p;
    std::cout << "{ ScavTrap } "<< name << " Copy Constructor Called "<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj){
    this->name = obj.name;
    this->hit_p = obj.hit_p;
    this->attack_D = obj.attack_D;
    this->energy_p = obj.energy_p;
    std::cout << "{ ScavTrap } " << name<<" Copy Assignment Called "<<std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "{ ScavTrap } "<< name <<" Destructor Called "<<std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (energy_p == 0)
    {
        std::cout<<"Sorry,No more attack."<< std::endl;
        return ;
    }
    std::cout<<"{ ScavTrap } " << name << " attacks " << target 
    << " , causing " << attack_D << " points of damege "<< std::endl;
    energy_p--;
}

void ScavTrap::guardGate(){
    std::cout<< "{ScavTrap } "<< name << " is Gate keeper mode"<< std::endl;
}

int ScavTrap::getAttack_D(void)
{
    return (attack_D);
}