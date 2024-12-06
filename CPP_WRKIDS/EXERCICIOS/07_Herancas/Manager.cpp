/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:53:13 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 18:59:59 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manager.hpp"

Manager::Manager(std::string name, int id, int size) 
    : Employee(name, id), _teamSize(size)
{
    //std::cout << "Variável Inicializada:: " << _name << " " << _id << " " << _teamSize << std::endl;
}

Manager::~Manager() 
{
    //std::cout << "Variável Destruída:: " << _name << " " << _id << " " << _teamSize << std::endl;
}

void Manager::displayInfo() const
{
    std::cout <<"Manager Info: " << std::endl; 
    // Reaproveitando o método displayInfo da classe base
    Employee::displayInfo();
    
    // Adicionando informações específicas de Manager
    std::cout << "Team Size:: " << _teamSize << std::endl;
}
