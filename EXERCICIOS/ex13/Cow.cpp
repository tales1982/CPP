/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cow.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:27:11 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 15:20:59 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cow.hpp"
#include "Colors.hpp"

Cow::Cow(const std::string &name) : Animal(name) {};

Cow::~Cow()
{
    std::cout << "Destructor [COW]" << std::endl;
};

void Cow::makeSound() const
{
    std::cout << YELLOW << "Muuu!" << RESET << std::endl;
}