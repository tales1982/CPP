/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zoo.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:30:20 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 13:39:18 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <iostream>
#include "Animal.hpp"

class Zoo
{
private:
    std::map<std::string, Animal *> animals;

public:
    Zoo(/* args */);
    ~Zoo();

    void addAnimal(std::string name, Animal *animal);
    void makeSound(std::string name);
    void makeAllSounds();
};
