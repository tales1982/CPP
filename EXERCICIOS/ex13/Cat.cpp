/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:18:30 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 15:21:18 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Colors.hpp"

Cat::Cat(const std::string &name) : Animal(name) {};

Cat::~Cat()
{
    std::cout << "Cosntrutor [CATS]" << std::endl;
};

void Cat::makeSound() const
{
    std::cout << BLUE << "Miau!" << RESET << std::endl;
}