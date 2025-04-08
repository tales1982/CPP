/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:40:10 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 15:56:41 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Elevador.hpp"

void exibirMenu() {
    std::cout << "\n--- Menu do Elevador ---\n";
    std::cout << "1. Entrar pessoas\n";
    std::cout << "2. Sair pessoas\n";
    std::cout << "3. Subir\n";
    std::cout << "4. Descer\n";
    std::cout << "5. Ver estado atual\n";
    std::cout << "0. Sair do programa\n";
    std::cout << "Escolha uma opção: ";
}

void estadoAtual(const Elevador& elevador) {
    std::cout << "\n📍 Andar atual: " << elevador.getAndarAtual() << "/" << elevador.getTotalAndar()
              << "\n👥 Pessoas no elevador: " << elevador.getCapacidadeAtual()
              << "/" << elevador.getCapacidadeMax() << "\n";
}

int main() {
    Elevador elevador(10, 5); // 10 andares, 5 pessoas de capacidade

    int opcao;
    do {
        exibirMenu();
        std::cin >> opcao;

        switch (opcao) {
            case 1: {
                int qtd;
                std::cout << "Quantas pessoas vão entrar? ";
                std::cin >> qtd;
                try {
                    elevador.entra(qtd);
                } catch (std::exception &e) {
                    std::cerr << "Erro: " << e.what() << "\n";
                }
                break;
            }
            case 2: {
                int qtd;
                std::cout << "Quantas pessoas vão sair? ";
                std::cin >> qtd;
                try {
                    elevador.sai(qtd);
                } catch (std::exception &e) {
                    std::cerr << "Erro: " << e.what() << "\n";
                }
                break;
            }
            case 3: {
                int andares;
                std::cout << "Quantos andares deseja subir? ";
                std::cin >> andares;
                try {
                    elevador.subir(andares);
                } catch (std::exception &e) {
                    std::cerr << "Erro: " << e.what() << "\n";
                }
                break;
            }
            case 4: {
                int andares;
                std::cout << "Quantos andares deseja descer? ";
                std::cin >> andares;
                try {
                    elevador.descer(andares);
                } catch (std::exception &e) {
                    std::cerr << "Erro: " << e.what() << "\n";
                }
                break;
            }
            case 5:
                estadoAtual(elevador);
                break;
            case 0:
                std::cout << "Saindo do programa...\n";
                break;
            default:
                std::cerr << "Opção inválida!\n";
        }

    } while (opcao != 0);

    return 0;
}