#include"Dados.hpp"

Dados::Dados()
{
}

Dados::~Dados()
{
}

void Dados::setName(const std::string &name){
    _name = name;
}


void Dados::setAge(int age){
    if(age < 0 || age > 130)
        throw std::runtime_error("Idade invalida..");
    _age = age;
}

const std::string Dados::getName() const 
{
    return _name;
}

int Dados::getAge() const
{
    return _age;
}

// Sobrecarga do operador <<
std::ostream& operator<<(std::ostream& saida, const Dados& x){
    saida << x.getName() << " tem " << x.getAge() << " anos de idade.";
    return saida;
}