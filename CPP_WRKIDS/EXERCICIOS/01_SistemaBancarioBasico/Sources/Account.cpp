/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:51:39 by tales             #+#    #+#             */
/*   Updated: 2024/11/15 22:53:35 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Account.hpp"

ContaBancaria::ContaBancaria(std::string nome, std::string numero)
{
    this->nome = nome;
    this->numeroC = numero;
    this->saldo = 0.0;
    // std::cout << "Conta criada" << std::endl;
}

void ContaBancaria::depositar(double valor)
{
    this->saldo += valor;
}

std::string ContaBancaria::getNome()
{
    return this->nome;
}

std::string ContaBancaria::getNumeroConta()
{
    return this->numeroC;
}
double ContaBancaria::getSaldo()
{
    return this->saldo;
}

void ContaBancaria::imprimir()
{
    std::cout << "Nome: " << this->nome << std::endl;
    // std::cout << "Numero: " << this->numero << std::endl;
    std::cout << "Saldo: " << this->saldo << std::endl;
}

void ContaBancaria::sacar(double valor) {
    if (valor > this->saldo) {
        std::cout << "Saldo insuficiente!" << std::endl;
    } else {
        this->saldo -= valor;
    }
}

void ContaBancaria::menu()
{
    std::cout << std::endl;
    std::cout << "\033[33mBem-vindo ao Sistema Bancário!\033[0m" << std::endl;
    std::cout << "\033[34m1.\033[0m Novo Cliente" << std::endl;
    std::cout << "\033[34m2.\033[0m Depositar " << std::endl;
    std::cout << "\033[34m3.\033[0m Sacar" << std::endl;
    std::cout << "\033[34m4.\033[0m Consulta Saldo" << std::endl;
    std::cout << "\033[34m5.\033[0m Sair" << std::endl;
}

ContaBancaria::~ContaBancaria()
{
    // std::cout << "Conta destruida" << std::endl;
}