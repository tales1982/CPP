/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pessoa.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:27:40 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 17:11:00 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pessoa.hpp"

Pessoa::Pessoa(std::string name, int age, float height): _name(name), _age(age), _height(height) {}

Pessoa::~Pessoa() {}

void Pessoa::setName(std::string name)
{
    this->_name = name;
}
void Pessoa::setAge(int age)
{
    this->_age = age;
}
void Pessoa::setHeight(float height)
{
    this->_height = height;
}

std::string Pessoa::getName()
{
    return this->_name;
}

int Pessoa::getAge()
{
    return this->_age;
}
float Pessoa::getHeight()
{
    return this->_height;
}
void Pessoa::setInfo(std::string name, int age, float height)
{
    this->_name = name;
    this->_age = age;
    this->_height = height;
}
