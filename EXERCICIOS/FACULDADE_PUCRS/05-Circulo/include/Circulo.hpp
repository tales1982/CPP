/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circulo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:08:52 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 20:19:59 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class Circulo
{
private:
    double calcularArea(double raio);
    double calcularCircunferencia(double raio);

public:
    Circulo();
    Circulo(/*arg */);
    Circulo(const Circulo &other);
    Circulo &operator=(const Circulo &other);
    ~Circulo();
};

#endif