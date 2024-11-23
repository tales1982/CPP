/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:38:40 by tales             #+#    #+#             */
/*   Updated: 2024/11/22 22:19:17 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream> // Biblioteca para cout e cin
#include <string>   // Biblioteca para string
#include <vector>   // Biblioteca para vector

// Classe Person
class Person
{
private:
    std::string _name; // Nome da pessoa (atributo privado)

public:
    // Construtor e destrutor
    Person(std::string name);
    ~Person();

    // Método para exibir uma saudação
    void greet() const;
};

// Funções auxiliares
Person* createPerson(std::string name);
void introducePerson(std::string name);

#endif
