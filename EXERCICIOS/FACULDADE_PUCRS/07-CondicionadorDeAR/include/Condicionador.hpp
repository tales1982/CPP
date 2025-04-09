/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Condicionador.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:44:14 by tales             #+#    #+#             */
/*   Updated: 2025/04/09 13:11:41 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONDICIONADOR_HPP
#define CONDICIONADOR_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Condicionador
{
private:
    static const float _UNIDADE = 1.8;
    int _potencia;
    float _tempExterna;
    float _tempAmbiente;
    
public:
    Condicionador();
    Condicionador(float potencia, float tempExterna);
    Condicionador(const Condicionador &other);
    Condicionador &operator=(const Condicionador &other);
    ~Condicionador();

    //setter
    void almentarTemp() ;
    void diminuirTemp() ;

    //getters
    float getPotencia()const;
    
    float verTemperaturaAmbiente();
    float verTemperaturaExterna() const;
};

std::ostream& operator<<(std::ostream& out, Condicionador& b);


#endif