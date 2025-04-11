/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Carro.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:26:29 by tales             #+#    #+#             */
/*   Updated: 2025/04/11 19:15:27 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CARRO_HPP
#define CARRO_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class Carro
{
private:
    const float _CONSUMO; // km por litro
    float _tanque;        // litros no tanque
    float _km;            // km rodados

public:
    Carro();
    Carro(float tanque, float km);
    Carro(const Carro &other);
    Carro &operator=(const Carro &other);
    ~Carro();

    void abastecer(float litros);
    float MoverCarro(float km);

    float getCombustivel() const;
    float getKmRodado() const;
    float getAutonomia() const;
    float diselRestante() const; // Retorna autonomia em km
};

#endif