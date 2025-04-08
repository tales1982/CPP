/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Relogio.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:49:48 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 19:46:48 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Relogio.hpp"

Relogio::Relogio() {};

Relogio::Relogio(int hora, int minuto, int segundo) : _hora(hora), _minuto(minuto), _segundo(segundo) {};

Relogio::Relogio(const Relogio &other) : _hora(other._hora), _minuto(other._minuto), _segundo(other._segundo) {};

Relogio &Relogio::operator=(const Relogio &other)
{
    if (this != &other)
    {
        _hora = other._hora;
        _minuto = other._minuto;
        _segundo = other._segundo;
    }
    return *this;
};

Relogio::~Relogio() {};

void Relogio::setHora(int hrs, int mim, int sec)
{
    if (hrs > 23)
        throw std::invalid_argument("A hora tem que esta entre 0 a 23 ");
    else if (mim > 59)
        throw std::invalid_argument("A minuto tem que esta entre 0 a 59 ");
    else if (sec > 59)
        throw std::invalid_argument("O segundo tem que esta entre 0 a 59 ");
    else
    {
        _hora = hrs;
        _minuto = mim;
        _segundo = sec;
    }
};

void Relogio::getHora(int &hrs, int &mim, int &sec) const
{
    hrs = _hora;
    mim = _minuto;
    sec = _segundo;
};

void Relogio::avancar()
{
    _segundo++;

    if (_segundo == 60)
    {
        _segundo = 0;
        _minuto++;
    }

    if (_minuto == 60)
    {
        _minuto = 0;
        _hora++;
    }

    if (_hora == 24)
    {
        _hora = 0;
    }
}
