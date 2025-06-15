/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zoo.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 13:39:20 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 15:09:40 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zoo.hpp"

// Construtor padrão (vazio)
Zoo::Zoo() {}

// Destrutor: libera todos os ponteiros de Animal alocados dinamicamente
Zoo::~Zoo()
{
    for (std::map<std::string, Animal *>::iterator it = animals.begin(); it != animals.end(); ++it)
    {
        delete it->second; // libera o objeto apontado
    }
    animals.clear(); // limpa o mapa
}

// Adiciona um novo animal ao mapa
void Zoo::addAnimal(std::string name, Animal *animal)
{
    // Se já existir, deleta o antigo para evitar vazamento de memória
    if (animals.find(name) != animals.end())
    {
        delete animals[name];
    }
    animals[name] = animal;
}

// Emite o som de um animal específico pelo nome
void Zoo::makeSound(std::string name)
{
    std::map<std::string, Animal *>::iterator it = animals.find(name);
    if (it != animals.end())
    {
        it->second->makeSound();
    }
    else
    {
        std::cout << "Animal '" << name << "' não encontrado no zoológico." << std::endl;
    }
}

// Emite o som de todos os animais
void Zoo::makeAllSounds()
{
    for (std::map<std::string, Animal *>::iterator it = animals.begin(); it != animals.end(); ++it)
    {
        std::cout << it->first << ": ";
        it->second->makeSound();
    }
}
