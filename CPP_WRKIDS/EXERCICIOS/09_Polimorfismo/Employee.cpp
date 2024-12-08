/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:12:22 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 13:59:39 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Employee.hpp"

Employee::Employee(const std::string& name) : _name(name) {
    std::cout << this->_name << " Inicializado" << std::endl;
}

Employee::~Employee() {
    std::cout << this->_name << " Destruído" << std::endl;
}

void Employee::setName(const std::string& name) {
    this->_name = name;
}

std::string Employee::getName() const {
    return this->_name;
}
