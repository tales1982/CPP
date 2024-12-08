/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SalariedEmployee.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:14:43 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 14:38:36 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SalariedEmployee.hpp"

SalariedEmployee::SalariedEmployee(const std::string& name)
    : Employee(name), _salario(0.0f) {}

SalariedEmployee::~SalariedEmployee() {}

void SalariedEmployee::setSalario(float salarioMensal) {
    this->_salario = salarioMensal;
}

float SalariedEmployee::getSalario() const {
    return this->_salario;
}

float SalariedEmployee::calculateSalary() const {
    return this->_salario;
}

