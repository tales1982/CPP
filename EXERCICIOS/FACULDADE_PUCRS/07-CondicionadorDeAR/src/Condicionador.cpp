/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Condicionador.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:44:10 by tales             #+#    #+#             */
/*   Updated: 2025/04/09 13:17:32 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Condicionador.hpp"

Condicionador::Condicionador() : _potencia(0), _tempExterna(20) {};

Condicionador::Condicionador(float potencia, float tempExterna) : _potencia(potencia), _tempExterna(tempExterna) 
{
    if (potencia < 0 || potencia > 10)
        throw std::invalid_argument("Potencia deve estar entre 0 e 10!");
};

Condicionador::Condicionador(const Condicionador &other) : _potencia(other._potencia), _tempExterna(other._tempExterna) {};

Condicionador &Condicionador::operator=(const Condicionador &other)
{

    if (this != &other)
    {
        _potencia = other._potencia;
        _tempExterna = other._tempExterna;
    }
    return *this;
}

Condicionador::~Condicionador() {};

void Condicionador::almentarTemp()
{
    
    if (_potencia >= 10)
        throw std::invalid_argument("Potencia já está no máximo!");
    _potencia += _UNIDADE;
};

void Condicionador::diminuirTemp()
{
    
    if (_potencia <= 0)
        throw std::invalid_argument("Potencia já está no mínimo!");
    _potencia -= _UNIDADE;
};

float Condicionador::getPotencia() const
{
    return _potencia;
};

float Condicionador::verTemperaturaAmbiente()
{
    _tempAmbiente = _tempExterna - (_potencia * _UNIDADE);

    return _tempAmbiente;
};

float Condicionador::verTemperaturaExterna() const
{
    return _tempExterna;
};
std::ostream &operator<<(std::ostream &out, Condicionador &b) {
    out << "Potencia: " << b.getPotencia() << "\n"
        << "Temperatura externa: " << b.verTemperaturaExterna() << " °C\n"
        << "Temperatura ambiente: " << b.verTemperaturaAmbiente() << " °C\n";
    return out;
}