/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 19:59:19 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 21:01:05 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Elevador.hpp"

int main() {
    Elevador elevador;
    elevador.inicializa(10, 20);

    elevador.entrada(5);
    elevador.subir();
    elevador.sair(3);
    elevador.subir();
    elevador.subir();
    elevador.sair(2);
    elevador.descer();
    elevador.sair(1);
    elevador.entrada(6);
    elevador.descer();
    elevador.descer();
    elevador.sair(6);


    std::cout << "Andar atual: " << elevador.getAndarAtual() << "\n";
    std::cout << "Pessoas no elevador: " << elevador.getCapacidadeAtual() << "\n";

    return 0;
}
