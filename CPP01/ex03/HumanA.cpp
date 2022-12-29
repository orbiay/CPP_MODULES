/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:09:38 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/19 17:21:23 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

void HumanA::attack(void)
{
	std ::cout << name << " attacks with their " << weapon_type.getType() << std::endl;
}

HumanA::HumanA(std::string t_name, Weapon &t_type) : weapon_type(t_type)
{
	
	name = t_name;
};

HumanA::~HumanA(){
	
}

//There is no such thing as an "empty reference". You have to provide a reference at object initialization. Put it in the constructor's base initializer list.