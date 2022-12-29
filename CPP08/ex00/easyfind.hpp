#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include<algorithm>
#include<iostream>
#include<vector>
template<typename T>
void easyfind(T container,int target)
{
    typename T::iterator iter = std::find(container.begin(),container.end(),target);
    if (iter != container.end())
	{
		std::cout<<*iter;
	}
	else
		throw std::overflow_error("invalid arguments");
}
#endif
