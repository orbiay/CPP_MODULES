#include<iostream>

 struct Data
 {
    char c;
    float f;
 };

uintptr_t serialize(Data* ptr)
{
    uintptr_t var = reinterpret_cast<uintptr_t>(ptr);
    return (var);
}

Data* deserialize(uintptr_t raw)
{
    Data* var = reinterpret_cast<Data*>(raw);
    return (var);
}

int main ()
{
    Data *var = new Data();
    var->c = 'S';
    uintptr_t uin = serialize(var);
    var = deserialize(uin);
    std::cout<<"\n"<< var->c ;
}