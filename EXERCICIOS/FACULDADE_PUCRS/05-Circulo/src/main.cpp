/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:16:48 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 21:23:00 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Circulo.hpp"


int main() {
    // Criação de dois círculos
    Circulo circulo1;
    Circulo circulo2;
    
    // Definindo raio e centro para o primeiro círculo
    circulo1.definirRaio(5.0);
    circulo1.definirCentro(2.0, 3.0);
    
    // Definindo raio e centro para o segundo círculo
    circulo2.definirRaio(3.0);
    circulo2.definirCentro(8.0, 10.0);
    
    // Exibindo informações do primeiro círculo
    cout << "Círculo 1:" << endl;
    circulo1.imprimirRaio();
    circulo1.imprimirCentro();
    circulo1.imprimirArea();
    circulo1.imprimirCircunferencia();
    
    // Aumentando o raio do primeiro círculo em 20%
    cout << "\nAumentando o raio do Círculo 1 em 20%:" << endl;
    circulo1.aumentarRaio(20);
    circulo1.imprimirRaio();
    circulo1.imprimirArea();
    circulo1.imprimirCircunferencia();
    
    // Exibindo informações do segundo círculo
    cout << "\nCírculo 2:" << endl;
    circulo2.imprimirRaio();
    circulo2.imprimirCentro();
    circulo2.imprimirArea();
    circulo2.imprimirCircunferencia();
    
    // Exibindo a distância entre os centros dos dois círculos
    cout << "\nDistância entre os centros dos Círculo 1 e Círculo 2:" << endl;
    circulo1.imprimirDistanciaEntreCirculos(circulo2);
    
    return 0;
}