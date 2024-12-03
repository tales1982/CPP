/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:54:02 by tales             #+#    #+#             */
/*   Updated: 2024/11/23 20:06:03 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/Person.hpp"

 Person::Person(std::string name) 
 {
    this->_name = name;
    std::cout << "your name was created : " << this->_name <<std::endl;
 };
 

void Person::greet()
{
    std::cout << "***********************************" << std::endl;
    std::cout << "Olá, meu nome é " << this->_name << "!" << std::endl;
    std::cout << "***********************************" << std::endl;
}
Person::~Person()
{
    std::cout << "***********************************" << std::endl;
    std::cout << "Seu nome foi destruído: " << this->_name << std::endl;
    std::cout << "***********************************" << std::endl;
}