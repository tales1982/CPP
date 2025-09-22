/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sobrecarga.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:39:09 by tales             #+#    #+#             */
/*   Updated: 2025/09/22 10:01:24 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sobrecarga.hpp"

// Construtores
Sobrecarga::Sobrecarga()
    : _name("Default"), _age(0), operadorA(0), operadorB(0) {}

Sobrecarga::Sobrecarga(const std::string &name, unsigned int age, int a, int b)
    : _name(name), _age(age), operadorA(a), operadorB(b) {}

Sobrecarga::Sobrecarga(const Sobrecarga &other)
    : _name(other._name), _age(other._age),
      operadorA(other.operadorA), operadorB(other.operadorB) {}

Sobrecarga &Sobrecarga::operator=(const Sobrecarga &other)
{
    if (this != &other)
    {
        _name = other._name;
        _age = other._age;
        operadorA = other.operadorA;
        operadorB = other.operadorB;
    }
    return *this;
}

Sobrecarga::~Sobrecarga() {}

// Setters
void Sobrecarga::setName(std::string name)
{
    _name = name;
};

void Sobrecarga::setAge(unsigned int age)
{
    _age = age;
};

// Getters
const std::string &Sobrecarga::getName() const
{
    return _name;
};

unsigned int Sobrecarga::getAge() const
{
    return _age;
};

int Sobrecarga::getOperadorA() const { return operadorA; }

int Sobrecarga::getOperadorB() const { return operadorB; }

// Operadores
Sobrecarga Sobrecarga::operator+(const Sobrecarga &other) const
{
    return Sobrecarga("Result", 0,
                      this->operadorA + other.operadorA,
                      this->operadorB + other.operadorB);
}

Sobrecarga Sobrecarga::operator-(const Sobrecarga &other) const
{
    Sobrecarga r(*this);
    r.operadorA = this->operadorA - other.operadorA;
    r.operadorB = this->operadorB - other.operadorB;
    return r;
};

bool Sobrecarga::operator==(const Sobrecarga &other) const{
    return _name == other.getName()
    && _age == other.getAge()
    && operadorA == other.operadorA
    && operadorB == other.operadorB;
};

bool Sobrecarga::operator<(const Sobrecarga &other) const {
    if (operadorA < other.operadorA) return true;
    if (operadorA > other.operadorA) return false;
    return operadorB < other.operadorB; // desempate
}



 Sobrecarga& Sobrecarga::operator+=(const Sobrecarga &other)
 {
      this->operadorA += other.operadorA;
      this->operadorB += other.operadorB;
      return *this;
 };

std::ostream& operator<<(std::ostream& out, const Sobrecarga& b) {
    out << b.getName()
        << b.getAge()
        << b.getOperadorA()
        << b.getOperadorB();
    return out;
}