#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include<stack>
#include<iostream>
#include<iterator>
template <typename T>
class MutantStack : public std::stack<T>{
public:
	typedef typename std::stack<T>::container_type::iterator	iterator;
	MutantStack(){};
	MutantStack(const MutantStack &obj){
		this->c = obj.c;
	};
	MutantStack &operator=(const MutantStack &obj){
		this->c = obj.c;
		return (*this);
	}
	~MutantStack(){};
	iterator end()
	{
		return(this->c.end());
	};
	iterator begin()
	{
		return (this->c.begin());
	};
};
#endif