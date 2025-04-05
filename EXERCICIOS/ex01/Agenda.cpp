/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:53:07 by tales             #+#    #+#             */
/*   Updated: 2025/04/05 11:34:41 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Agenda.hpp"

Agenda::Agenda(){}//construtor padrao sem parametro


//construtor inicial com paramentro
Agenda::Agenda(const std::string& name, const std::string& surname, int phoneNumber)
{
    _name = name;
    _surName = surname;
    _phoneNumber = phoneNumber;
        
    std::cout << "*----- Dados Inicial ------*" << std::endl;
    std::cout << "Nome: " << _name << std::endl;
    std::cout << "Sobrenome: " << _surName << std::endl;
    std::cout << "Numero de telefone: " << _phoneNumber << std::endl;
    std::cout << std::endl;  
}
//construtor de copia, cria uma copia
Agenda::Agenda(const Agenda& other)
{
    _name = other._name;
    _surName = other._surName;
    _phoneNumber = other._phoneNumber;
}

//cria um obj pra outro ja existente
Agenda& Agenda::operator=(const Agenda& other)
{
    if(this != &other)
    {
        _name = other._name;
        _surName = other._surName;
        _phoneNumber = other._phoneNumber;
    }
    return *this;
}

Agenda::~Agenda(){}//destrutor

//Set adcionar valores
void Agenda::setName(const std::string& name)
{
    _name = name;
}
void Agenda::setSurName(const std::string& surName)
{
    _surName = surName;
}
void Agenda::setPhoneNumber(int number)
{
    _phoneNumber = number;
}

//get retorna valores
std::string Agenda::getName() const
{
    return _name;
}

std::string Agenda::getSurname()const
{
    return _surName;    
}

int Agenda::getPhoneNumber()const
{
    return _phoneNumber;
}

