/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:06:55 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/20 09:42:26 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

void HumanB::attack(void)
{
	if(weapon_type == NULL)
		return;
	std ::cout << name << " attacks with their " << weapon_type->getType() << std::endl;
}

HumanB::HumanB(std :: string t_name)
{
	name = t_name;
}

HumanB::~HumanB(){
	
}

void HumanB::setWeapon(Weapon &type){
	weapon_type = &type;
	std::cout << "\ntype " << weapon_type->getType() << std::endl;
}

//nchdito reference bach yponty 3la ladress bach ila 3mer ghadi yb9a mponty 3lih