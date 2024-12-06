/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:52:00 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 19:00:23 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Employee.hpp"

Employee::Employee(std::string name, int id): _name(name), _id(id)
{
    //std::cout<< "Variavel Inicializada: "<< _name << " " << _id << std::endl;   
}

Employee::~Employee()
{
    //std::cout<< "Variavel destruida: "<< _name << " " << _id << std::endl;   
}

void Employee::displayInfo()const
{
    std::cout<< "Name: "<< _name << std::endl;    
    std::cout<< "ID: "<< _id << std::endl;    
}