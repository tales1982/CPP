#ifndef DADOS_HPP
#define DADOS_HPP

#include <iostream>
#include <string>

class Dados
{
private:
    int _age;
    std::string _name;
public:
    Dados();
    ~Dados();

    //set
    void setName(const std::string& nome);
    void setAge(int age);

    //get
    std::string getName() const;
    int getAge() const;
};

#endif
