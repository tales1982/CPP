/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Elevador.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:00:18 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 15:44:46 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEVADOR_HPP
#define ELEVADOR_HPP

#include<string>
#include<iostream>
#include <stdexcept>

class Elevador
{
private:
    signed _andarAtual;
    signed int _totalAndar;
    int _capacidadeMAx;
    int _capacidadeAtual;
    
    
public:
    Elevador();
    Elevador(signed totalAndar, int capMax);
    Elevador(const Elevador &other);
    Elevador &operator=(const Elevador &other);
    ~Elevador();
    

    //Metodos
    void inicializar(int capMaxl, int totalAndar);
    void entra(int entraPessoa);
    void sai(int saiPessoa);
    void subir(int subirAndar);
    void descer(int descerAndar);
    
    //getters
    signed getAndarAtual()const ;
    signed getTotalAndar() const;
    int getCapacidadeMax() const;
    int getCapacidadeAtual() const;
    
};



#endif