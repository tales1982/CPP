/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agenda.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:22:38 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 12:13:25 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Pessoa.hpp"

class Agenda
{
private:
    Pessoa Povo[10];
public:
    Agenda();
    Agenda(Pessoa &p);
    Agenda(const Agenda &other);
    Agenda &operator=(const Agenda &other);
    ~Agenda();

    void armazenaPessoa(std::string nome, int idade, float altura);
    void removePessoa(std::string nome);
    int buscaPessoa(std::string nome); // informa em que posição da agenda está a pessoa
    void imprimePovo(); // imprime todos os dados de todas as pessoas da agenda
    void imprimePessoa(int i); // imprime os dados da pessoa que está na posição 'i' da agenda
};



#endif