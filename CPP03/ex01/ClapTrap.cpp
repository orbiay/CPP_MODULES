/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:31:53 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/24 14:47:38 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std ::cout << "{ ClapTrap } " << name <<" Default Constructor Called "<< std:: endl;
    hit_p = 10;
    name = "No value";
    energy_p = 10;
    attack_D = 0;
}

ClapTrap::~ClapTrap(){
    std ::cout << "{ ClapTrap } " << name <<" Destructor Called " <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    this->name = obj.name;
    this->hit_p = obj.hit_p;
    this->attack_D = obj.attack_D;
    this->energy_p =  obj.energy_p;
    std::cout << "{ ClapTrap } " << name <<" Copy Constroctor Called " << std ::endl;
}

ClapTrap::ClapTrap(std::string& name)
{
    hit_p = 10;
    energy_p = 10;
    attack_D = 0;
    this->name = name;
    std::cout<< "{ ClapTrap } " << name <<" Constroctor Paramiterized Called "<<std ::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj){
    this->name = obj.name;
    this->hit_p = obj.hit_p;
    this->attack_D = obj.attack_D;
    this->energy_p =  obj.energy_p;
    std::cout << "{ ClapTrap } " << name<<" Copy Assingment Constroctor Called "<<std ::endl;
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    
    std::cout<<"{ ClapTrap }" << name << " attacks " << target 
    << " , causing " << attack_D << " points of damege "<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    hit_p -= amount;
    std::cout << "{ ClapTrap } " << name <<" Hit Point has decreased by  "<< amount <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (energy_p == 0)
    {
        std::cout<< "{ ClapTrap } " << name <<" Sorry,No more beRepaired."<< std::endl;
        return ;
    }
    hit_p += amount;
    std::cout<< "{ ClapTrap } " << name <<" Your Hit Point has increase by "<< amount<<std::endl;
    energy_p--; 
}

int ClapTrap::getAttackDamage(void)
{
    return (attack_D);
}
