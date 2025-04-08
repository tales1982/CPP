/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circulo.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:20:06 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 20:22:23 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/Circulo.hpp"

Circulo::Circulo(){};

Circulo::Circulo(/*arg */){};


Circulo::Circulo(const Circulo &other){};

Circulo &Circulo::operator=(const Circulo &other){};

Circulo::~Circulo(){};

double Circulo::calcularArea(double raio) {
    double pi = 3.14159; // valor aproximado de π
    return pi * raio * raio;
}

double Circulo::calcularCircunferencia(double raio) {
    double pi = 3.14159; // aproximação de π
    return 2 * pi * raio;
}