#include"MutantStack.hpp"

int main()
{
    {
        MutantStack<int> mstack;
        MutantStack<int> sstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        sstack = mstack;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout<<"\n\nEX 01\n"<<std::endl;
    {
        MutantStack<char> sec_stack;
        sec_stack.push('O');
        sec_stack.push('o');
        sec_stack.push('U');
        sec_stack.push('S');
        sec_stack.push('s');
        sec_stack.push('A');
        sec_stack.push('a');
        sec_stack.push('M');
        sec_stack.push('a');
        sec_stack.push('A');
        MutantStack<char>::iterator  iter = sec_stack.begin();
        MutantStack<char>::iterator  iter2 = sec_stack.end();
        while (iter != iter2)
        {
            if (isupper(*iter))
                std::cout<<*iter<<" ";
            
            ++iter;
        }
    }
    return 0;
}