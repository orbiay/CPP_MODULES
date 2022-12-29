/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:38:43 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/20 11:33:49 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std :: string ft_replace(std ::string buffer, int pos,std :: string s1, std :: string s2)
{
	buffer.erase(pos,s1.length());
	buffer.insert(pos,s2);
	return (buffer);
}
int main (int ac, char **av)
{
	if(ac == 4)
	{
		std :: string filename = av[1];
		std :: string s1= av[2];
		std :: string buf;
		std :: string s2 = av[3];
		size_t		pos = 1;
		std :: ifstream id_filename;
		std :: ofstream id_filereplace(filename + ".replace");
		id_filename.open(filename);
		while (getline (id_filename, buf)) {
			std::cout<<buf<<std::endl;
  			while (pos >= 0)
			{
				pos = buf.find(s1);
				if (pos  == std::string::npos)
				{
					std::cout<<pos<<std::endl;
					break;
				}
				if (pos >= 0)
				{
					buf = ft_replace(buf,pos,s1,s2);
					pos += s2.length();
				}
			}
			id_filereplace <<buf << "\n";
		}
	}
	return (0);
}