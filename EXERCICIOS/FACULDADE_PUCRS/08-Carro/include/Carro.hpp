/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Carro.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:26:29 by tales             #+#    #+#             */
/*   Updated: 2025/04/09 14:51:06 by tales            ###   ########.fr       */
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
    float tanque;
    float consumo;
    
public:
    Carro();
    Carro(/* args */);
    Carro(const Carro &other);
    Carro &operator=(const Carro &other);
    ~Carro();
    
    
};



#endif