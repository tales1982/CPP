/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:53:06 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 15:20:22 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Colors.hpp"

Dog::Dog(const std::string &name) : Animal(name) {}

Dog::~Dog()
{
    std::cout << "Cosntrutor [DOGS]" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << GREEN << "Au au!" << RESET << std::endl;
}