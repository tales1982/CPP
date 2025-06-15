/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:44:05 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 12:05:01 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

    Animal::Animal(const std::string& name): _name(name){};
    
    Animal::~Animal(){
        std::cout << this->_name << ": My work hi finishing!"<<std::endl;
    };

    
