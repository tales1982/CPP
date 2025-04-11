/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Carro.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:26:39 by tales             #+#    #+#             */
/*   Updated: 2025/04/11 19:14:08 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Carro.hpp"
#include <algorithm> // Para std::min

Carro::Carro() : _CONSUMO(15), _tanque(0), _km(0) {}

Carro::Carro(float tanque, float km) : _CONSUMO(15) {
    if (tanque < 0 || km < 0) {
        throw std::invalid_argument("Valores não podem ser negativos");
    }
    _tanque = tanque;
    _km = km;
}

Carro::Carro(const Carro &other)
    : _CONSUMO(other._CONSUMO), _tanque(other._tanque), _km(other._km) {}

Carro &Carro::operator=(const Carro &other) {
    if (this != &other) {
        _tanque = other._tanque;
        _km = other._km;
    }
    return *this;
}

Carro::~Carro() {}

void Carro::abastecer(float litros) {
    if (litros < 0) {
        throw std::invalid_argument("Litros devem ser positivos");
    }
    _tanque += litros;
}

float Carro::MoverCarro(float km) {
    if (km < 0) {
        throw std::invalid_argument("Distância não pode ser negativa");
    }
    
    float kmPossivel = _tanque * _CONSUMO;
    float kmPercorridos = std::min(km, kmPossivel);
    
    _tanque -= kmPercorridos / _CONSUMO;
    _km += kmPercorridos;
    
    if (kmPercorridos < km) {
        throw std::runtime_error("Combustível insuficiente");
    }
    
    return kmPercorridos;
}

float Carro::getCombustivel() const {
    return _tanque;
}

float Carro::getKmRodado() const {
    return _km;
}

float Carro::getAutonomia() const {
    return _tanque * _CONSUMO;
}