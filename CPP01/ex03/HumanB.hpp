/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:06:27 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/20 09:40:19 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include"Weapon.hpp"
#include<iostream>

class HumanB{
	Weapon *weapon_type;
	std :: string name;
public:
	HumanB(std :: string t_name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &type);//Warning
};
#endif