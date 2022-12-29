/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:04:17 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/19 17:15:32 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

const std::string& Weapon::getType(void)
{
	std :: string& strRef = type;
	return (strRef);
}

void Weapon::setType(std :: string new_Type)
{
	type = new_Type;
}

Weapon::Weapon()
{
	std :: cout << "Default Weapon Constructor" << std ::endl;
}
Weapon::~Weapon()
{
	std :: cout << " Weapon Disconstructor has been call" << std ::endl;
}

Weapon::Weapon(std :: string name)
{
	type = name;
}