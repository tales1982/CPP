/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:05:00 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 15:19:25 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zoo.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Cow.hpp"
#include "Colors.hpp"


int main()
{
    Zoo zoo;

    zoo.addAnimal("Rex", new Dog("Rex"));
    zoo.addAnimal("Mimi", new Cat("Mimi"));
    zoo.addAnimal("Mimosa", new Cow("Mimosa"));

    std::cout << "\n" << CYAN << "🐾 Emitindo som de um animal específico:" << RESET << std::endl;
    zoo.makeSound("Rex");

    std::cout << "\n" << MAGENTA << "🎶 Emitindo som de todos os animais:" << RESET << std::endl;
    zoo.makeAllSounds();

    std::cout << "\n" << YELLOW << "🧼 Limpando memória no fim do programa..." << RESET << std::endl;

    return 0;
}
