/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:44:58 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 12:16:05 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/Agenda.hpp"

Agenda::Agenda() {
    // opcional: inicializar manualmente algo
}

Agenda::Agenda(Pessoa &p) {
    Povo[0] = p;
    // opcional: preencher o restante com pessoas padrão
}

Agenda::Agenda(const Agenda &other)
{
    for(int i = 0; i < 10; i++)
    {
        Povo[i] = other.Povo[i];
    }
};

Agenda &Agenda::operator=(const Agenda &other)
{
    if(this != &other)
    {
        for(int i = 0; i < 10; i++)
        {
            Povo[i] = other.Povo[i];
        }
    }
    return *this;
};

Agenda::~Agenda(){};

void Agenda::armazenaPessoa(std::string nome, int idade, float altura)
{
    for(int i = 0; i < 10 ; i++)
    {
        if(Povo[i].getNome().empty())//se tiver vazio
        {
            Povo[i] = Pessoa(nome, idade, altura);
            return;
        }    
    }
    throw std::runtime_error("Agenda cheia! Nao e possivel adcionar mais pessoas.");
};

#include "../include/Agenda.hpp"

void Agenda::imprimePovo()
{
    for (int i = 0; i < 10; ++i)
    {
        if (!Povo[i].getNome().empty())
        {
            std::cout << "Pessoa " << i + 1 << ": " << Povo[i] << std::endl;
        }
    }
}



void Agenda::removePessoa(std::string nome)
{
    for (int i = 0; i < 10; i++)
    {
        if(Povo[i].getNome() == nome )
        {
            Povo[i] = Pessoa();// usa o construtor padrão pra "zerar" a pessoa
            return;
        }
    }
    throw std::runtime_error("Pessoa nao encontrada na agenda.");
};

// informa em que posição da agenda está a pessoa
int Agenda::buscaPessoa(std::string nome)
{
    for (int i = 0; i < 10; i++)
    {
        if(Povo[i].getNome() == nome)
            return i;
    }
    throw std::runtime_error("Pessoa nao encontrada na agenda.");
    return 0;   
}; 
// imprime os dados da pessoa que está na posição 'i' da agenda
void Agenda::imprimePessoa(int i)
{
    if (i >= 0 && i < 10)
        std::cout << Povo[i] << std::endl;
    else
        throw std::runtime_error("Índice inválido.");
}


