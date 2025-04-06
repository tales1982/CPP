#include"Dados.hpp"

Dados::Dados()
{
}

Dados::~Dados()
{
}

void Dados::setName(const std::string& name){
    _name = name;
}


void Dados::setAge(int age){
    if(age < 0 || age > 130)
        throw std::runtime_error("Idade invalida..");
    _age = age;
}

std::string Dados::getName() const 
{
    return _name;
}

int Dados::getAge() const
{
    return _age;
}
