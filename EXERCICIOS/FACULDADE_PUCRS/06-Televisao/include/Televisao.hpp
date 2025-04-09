/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Televisao.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 07:48:00 by tales             #+#    #+#             */
/*   Updated: 2025/04/09 09:36:39 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TELEVISAO_HPP
#define TELEVISAO_HPP

#include <iostream>
#include <string>
#include <stdexcept>



class Televisao
{
private:
   int _volume;
   int _canal;
   int _irPraCanal;

public:
    Televisao();
    Televisao(int volume, int canal);
    Televisao(const Televisao &other);
    Televisao &operator=(const Televisao &other);
    ~Televisao();

    //Setter
    void aumentarVolume();
    void diminuirVolume();
    void proximoCanal();
    void canalAnterior();
    void setCanal(int canal);
    
    //Getters
    int getVolume() const;
    int getCanal() const;

};

std::ostream& operator<<(std::ostream& out, const Televisao& b);


#endif