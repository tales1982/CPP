/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Relogio.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:39:16 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 19:28:34 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RELOGIO_HPP
#define RELOGIO_HPP

#include <string>
#include <stdexcept>

#include <iostream>

class Relogio
{
private:
    int _hora;
    int _minuto;
    int  _segundo;

public:
    Relogio();
    Relogio(int hora, int minuto, int segundo);
    Relogio(const Relogio &other);
    Relogio &operator=(const Relogio &other);
    ~Relogio();

    void setHora(int hrs, int mim, int sec);
    void getHora(int &hrs, int &mim, int &sec) const;
    void avancar();
};

#endif