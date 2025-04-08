/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Elevador.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:29:34 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 15:55:23 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Elevador.hpp"

Elevador::Elevador() {};

Elevador::Elevador(signed totalAndar, int capMax) : _andarAtual(0), _totalAndar(totalAndar), _capacidadeMAx(capMax), _capacidadeAtual(0) {};

Elevador::Elevador(const Elevador &other) : _andarAtual(other._andarAtual), _totalAndar(other._totalAndar), _capacidadeMAx(other._capacidadeMAx), _capacidadeAtual(other._capacidadeAtual) {
                                            };

Elevador &Elevador::operator=(const Elevador &other)
{
    if (this != &other)
    {
        _totalAndar = other._totalAndar;
        _capacidadeAtual = other._capacidadeAtual;
        _capacidadeMAx = other._capacidadeAtual;
        _andarAtual = other._andarAtual;
    }
    return *this;
};

Elevador::~Elevador() {};

// Metodos
void Elevador::inicializar(int capMax, int totalAndar)
{
    _andarAtual = 0;
    _capacidadeAtual = 0;
    _capacidadeMAx = capMax;
    _totalAndar = totalAndar;
};

void Elevador::entra(int entraPessoa)
{

    if ((_capacidadeAtual + entraPessoa) > _capacidadeMAx)
        throw std::invalid_argument("Nao tem mais espacao no elevador.");

    _capacidadeAtual += entraPessoa;
};

void Elevador::sai(int saiPessoa)
{

    if (saiPessoa > _capacidadeAtual)
        throw std::invalid_argument("Tem menos pessoa no elevador do que a quantidade que vai sair.");
    else if (saiPessoa <= 0)
        throw std::invalid_argument("Digite um valor positivo.");
    else
        _capacidadeAtual -= saiPessoa;
};
void Elevador::subir(int subirAndar)
{
    if ((subirAndar + _andarAtual) > _totalAndar)
        throw std::invalid_argument("Voce nao pode mais subir.");
    else
        _andarAtual += subirAndar;
};

void Elevador::descer(int descerAndar)
{
    if (_andarAtual - descerAndar < 0)
        throw std::invalid_argument("Voce nao pode descer abaixo do térreo.");
    else
        _andarAtual -= descerAndar;
};

// getters
signed Elevador::getAndarAtual() const
{
    return _andarAtual;
};

signed Elevador::getTotalAndar() const
{
    return _totalAndar;
};

int Elevador::getCapacidadeMax() const
{
    return _capacidadeMAx;
};

int Elevador::getCapacidadeAtual() const
{
    return _capacidadeAtual;
};