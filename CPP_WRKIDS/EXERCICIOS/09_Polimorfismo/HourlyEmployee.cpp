/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HourlyEmployee.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:15:38 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 14:38:20 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HourlyEmployee.hpp"

HourlyEmployee::HourlyEmployee(const std::string& name)
    : Employee(name), _horasTrabalada(0.0f), _precoHora(0.0f) {}

HourlyEmployee::~HourlyEmployee() {}

void HourlyEmployee::setHoras(float horas) {
    this->_horasTrabalada = horas;
}

void HourlyEmployee::setPrecoHora(float precoHora) {
    this->_precoHora = precoHora;
}

float HourlyEmployee::calculateSalary() const {
    return this->_horasTrabalada * this->_precoHora;
}

float HourlyEmployee::getSalarioHora() const {
    return this->_precoHora;
}

float HourlyEmployee::getHorasTrabalhada() const {
    return this->_horasTrabalada;
}
