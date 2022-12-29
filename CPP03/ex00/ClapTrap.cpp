/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:31:53 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/24 15:04:20 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std ::cout<< "Default Constructor Called" << std:: endl;
    hit_p = 10;
    name = "No Value";
    energy_p = 10;
    attack_D = 0;
}

ClapTrap::~ClapTrap(){
    std ::cout<<"Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    this->name = obj.name;
    this->hit_p = obj.hit_p;
    this->attack_D = obj.attack_D;
    this->energy_p =  obj.energy_p;
    std::cout<<"Copy Constructor Called"<< std ::endl;
}

ClapTrap::ClapTrap(std::string& name)
{
    hit_p = 10;
    energy_p = 10;
    attack_D = 0;
    this->name = name;
    std::cout<<"Constructor Paramiterized Called"<< std ::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
    this->name = obj.name;
    this->hit_p = obj.hit_p;
    this->attack_D = obj.attack_D;
    this->energy_p =  obj.energy_p;
    std::cout<<"Copy Assignment Constructor Called"<< std ::endl;
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    if (energy_p == 0)
    {
        std::cout<<"Sorry,No more attack."<< std::endl;
        return ;
    }
    std::cout<<"ClapTrap " << name << " attacks " << target 
    << " , causing " << attack_D << " points of damege "<< std::endl;
    energy_p--;
}

void ClapTrap::takeDamage(unsigned int amount){
    hit_p -= amount;
    std::cout<<"Your Hit Point has decreased "<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (energy_p == 0)
    {
        std::cout<<"Sorry,No more beRepaired."<< std::endl;
        return ;
    }
    hit_p += amount;
    std::cout<<"Your Hit Point has increased "<<std::endl;
    energy_p--; 
}

int ClapTrap::getAttackDamage(void)
{
    return (attack_D);
}

