/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CreatePerson.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:53:52 by tales             #+#    #+#             */
/*   Updated: 2024/11/23 08:50:42 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/Person.hpp"

 Person::Person(std::string name) 
 {
    this->_name = name;
    std::cout << "your name was created" << this->_name <<std::endl;
 };
 
Person::~Person()
{
    std::cout << "your name was destroyed" << this->_name <<std::endl;
}