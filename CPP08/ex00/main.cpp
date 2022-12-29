/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:57:40 by orbiay            #+#    #+#             */
/*   Updated: 2022/12/13 12:54:57 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
int main ()
{
    try
    {
        std::vector<int> vec;
        vec.push_back(0);
        vec.push_back(15);
        vec.push_back(5);
        vec.push_back(-6);
        easyfind(vec,0);
    }
    catch(const std::exception& e)
    {
        std::cout<<e.what()<<std::endl;
    }
}