/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Telefisao.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 07:48:13 by tales             #+#    #+#             */
/*   Updated: 2025/04/09 09:36:32 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Televisao.hpp"

Televisao::Televisao() : _volume(10), _canal(1) {};


Televisao::Televisao(int volume, int canal) : _volume(volume), _canal(canal) {};

Televisao::Televisao(const Televisao &other) : _volume(other._volume), _canal(other._canal) {};

Televisao &Televisao::operator=(const Televisao &other)
{
    if (this != &other)
    {
        _volume = other._volume;
        _canal = other._canal;
    }
    return *this;
};

Televisao::~Televisao() {};

// Setter
void Televisao::aumentarVolume()
{
    _volume++;
    if (_volume > 30)
        throw std::invalid_argument("Volume não pode ser maior que 30!");
    
};

void Televisao::diminuirVolume()
{
    _volume--;
    if (_volume < 0)
        throw std::invalid_argument("Volume não pode ser menor que 0!");
}

void Televisao::proximoCanal()
{
    _canal++;
    if (_canal > 100)
        throw std::invalid_argument("O canal não pode ser maior que 100!");
};

void Televisao::canalAnterior()
{
    _canal--;
    if (_canal < 1)
        throw std::invalid_argument("O canal não pode ser menor que 1!");
};

void Televisao::setCanal(int canal)
{
    if(canal <= 0 || canal > 100)
        throw std::invalid_argument("O canal não exister!");
    _canal = canal;
};

// Getters
int Televisao::getVolume()const
{
    return _volume;
};

int Televisao::getCanal()const
{
    return _canal;
};


std::ostream& operator<<(std::ostream& out, const Televisao& b) {
    out << "Volume.: " << b.getVolume() << "\nCanal..: " << b.getCanal() <<std::endl;
    return out;
}
