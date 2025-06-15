/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:44:02 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 11:55:30 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
private:
    std::string _name;

public:
    Animal(const std::string &name);
    virtual ~Animal();
    virtual void makeSound() const = 0;
};
