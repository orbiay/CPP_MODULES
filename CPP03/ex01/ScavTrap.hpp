/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:22:22 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/24 10:22:29 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include"ClapTrap.hpp"
class ScavTrap : public ClapTrap{
public:
    ScavTrap();
    ScavTrap(const ScavTrap& obj);
    ScavTrap& operator=(const ScavTrap& obj);
    ScavTrap(std::string& name);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
    int getAttack_D(void);
};
#endif