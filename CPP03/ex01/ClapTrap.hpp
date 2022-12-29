/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:02:51 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/04 14:23:48 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include<iostream>
class ClapTrap{
protected:
    std::string name;
    int hit_p;
    int energy_p;
    int attack_D;
public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std ::string& name);
    ClapTrap(const ClapTrap& obj);
    ClapTrap& operator=(const ClapTrap& obj);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int getAttackDamage(void);
};
#endif