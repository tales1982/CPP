/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circulo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:08:52 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 21:22:30 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Circulo.hpp
#ifndef CIRCULO_HPP
#define CIRCULO_HPP

// Circulo.cpp
#include "Circulo.hpp"
#include <iostream>
#include <cmath>
using namespace std;

class Circulo {
private:
    double raio;
    double centroX;
    double centroY;

    double calcularArea() const;
    double calcularCircunferencia() const;
    double calcularDistancia(const Circulo &outro) const;

public:
    // Declaração com argumentos padrão
    Circulo(double r = 0.0, double x = 0.0, double y = 0.0);

    void definirRaio(double novoRaio);
    void aumentarRaio(double percentual);
    void definirCentro(double x, double y);
    void imprimirRaio() const;
    void imprimirCentro() const;
    void imprimirArea() const;
    void imprimirCircunferencia() const;
    void imprimirDistanciaEntreCirculos(const Circulo &outro) const;
};

#endif // CIRCULO_HPP
