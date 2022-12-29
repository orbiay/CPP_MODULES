/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:08:32 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/19 15:56:01 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include"Weapon.hpp"
#include<iostream>
class HumanA{
	Weapon& weapon_type;
	std :: string name;
public:
	HumanA();
	HumanA(std :: string t_name,Weapon &t_type);
	~HumanA();
	void attack();
};
#endif