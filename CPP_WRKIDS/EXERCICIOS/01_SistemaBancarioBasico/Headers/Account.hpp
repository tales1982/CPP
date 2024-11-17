/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:40:23 by tales             #+#    #+#             */
/*   Updated: 2024/11/15 22:55:58 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream> // Biblioteca para usar cout e cin
#include <string>   // Biblioteca para usar string
#include <vector>   // Biblioteca para usar vector7

class ContaBancaria
{
private:
    std::string nome;
    std::string numeroC;
    double saldo;

public:
    ContaBancaria(std::string _nome, std::string _numeroC);
    ~ContaBancaria();
    
    void depositar(double valor);
    void transferir(ContaBancaria &conta, double valor);
    void imprimir();
    void menu();
    void sacar(double valor);
    std::string getNome();
    std::string getNumeroConta();
    double getSaldo();
};

#endif // CONTA_BANCARIA_HPP