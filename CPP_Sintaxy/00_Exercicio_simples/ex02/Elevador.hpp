/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Elevador.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:26:33 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 20:58:07 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEVADOR_HPP
#define ELEVADOR_HPP

#include <iostream>
#include <string>

class Elevador
{
private:
    int _totalAndares; // maximo de andares 20
    int _andarAtual;
    int _maxCapacidade; // maximo de pessoas 10
    int _capacidadeAtual;

public:
    Elevador();
    ~Elevador();
    void inicializa(int capacidade, int totalAndares);
    void entrada(int numeroDePessoas);
    void sair(int sairElevador);
    void subir();
    void descer();

    int getAndarAtual() const;
    int getTotalAndares() const;
    int getCapacidadeAtual() const;
    int getMaxCapacidade() const;

    // void setTotalAndar(int totalAndar);
    // int getTotalAndar()const;
};

#endif