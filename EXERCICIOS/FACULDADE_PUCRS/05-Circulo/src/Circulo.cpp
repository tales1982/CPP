/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circulo.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:20:06 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 21:22:25 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/Circulo.hpp"


Circulo::Circulo(double r, double x, double y)
    : raio(r), centroX(x), centroY(y) {
}

double Circulo::calcularArea() const {
    return M_PI * raio * raio;
}

double Circulo::calcularCircunferencia() const {
    return 2 * M_PI * raio;
}

double Circulo::calcularDistancia(const Circulo &outro) const {
    double dx = outro.centroX - centroX;
    double dy = outro.centroY - centroY;
    return sqrt(dx * dx + dy * dy);
}

void Circulo::definirRaio(double novoRaio) {
    if(novoRaio >= 0) {
        raio = novoRaio;
    } else {
        cout << "O raio deve ser um valor não negativo." << endl;
    }
}

void Circulo::aumentarRaio(double percentual) {
    if(percentual >= 0) {
        raio += raio * (percentual / 100.0);
    } else {
        cout << "O percentual deve ser positivo." << endl;
    }
}

void Circulo::definirCentro(double x, double y) {
    centroX = x;
    centroY = y;
}

void Circulo::imprimirRaio() const {
    cout << "Raio: " << raio << endl;
}

void Circulo::imprimirCentro() const {
    cout << "Centro: (" << centroX << ", " << centroY << ")" << endl;
}

void Circulo::imprimirArea() const {
    cout << "Área: " << calcularArea() << endl;
}

void Circulo::imprimirCircunferencia() const {
    cout << "Circunferência: " << calcularCircunferencia() << endl;
}

void Circulo::imprimirDistanciaEntreCirculos(const Circulo &outro) const {
    cout << "Distância entre os centros: " << calcularDistancia(outro) << endl;
}
