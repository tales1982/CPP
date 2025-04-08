/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pessoa.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 08:49:49 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 10:08:09 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Pessoa
{
private:
    std::string _nome;
    int _idade;
    float _altura;

public:
    // Canonical Orthodox Form
    Pessoa();
    Pessoa(std::string nome, int idade, float altura);
    Pessoa(const Pessoa &other);
    Pessoa &operator=(const Pessoa &other);
    ~Pessoa();

    // Getters
    std::string getNome() const;
    int getIdade() const;
    float getAltura() const;

    // Setters
    void setNome(std::string nome);
    void setIdade(int idade);
    void setAltura(float altura);

};

std::ostream& operator<<(std::ostream& out, const Pessoa& b);


#endif