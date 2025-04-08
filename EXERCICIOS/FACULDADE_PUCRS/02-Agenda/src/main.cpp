/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:35:59 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 12:20:05 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Agenda.hpp"

int main() {
    Agenda agenda;

    try {
        agenda.armazenaPessoa("João", 25, 1.75);
        agenda.armazenaPessoa("Maria", 30, 1.65);
        agenda.armazenaPessoa("Tales", 40, 1.85);
        agenda.armazenaPessoa("Theo", 3, 1.25);
        agenda.armazenaPessoa("Thomas", 3, 1.15);
        
        std::cout << "Pessoas adicionadas com sucesso!" << std::endl;
        
        agenda.imprimePovo(); // se tiver implementado
        agenda.imprimePessoa(1);
        agenda.removePessoa("Maria");
        std::cout << "==============================================="<< std::endl;
        agenda.imprimePovo();
        
    } catch (const std::exception &e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}