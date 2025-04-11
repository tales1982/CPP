/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:26:50 by tales             #+#    #+#             */
/*   Updated: 2025/04/11 19:17:02 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Carro.hpp"

void testarCarro() {
    std::cout << "\n=== TESTE 1: Criação básica ===" << std::endl;
    Carro meuCarro;
    std::cout << "Carro criado com sucesso!" << std::endl;
    std::cout << "Combustível: " << meuCarro.getCombustivel() << " litros" << std::endl;
    std::cout << "Km rodados: " << meuCarro.getKmRodado() << " km" << std::endl;
    std::cout << "Autonomia: " << meuCarro.getAutonomia() << " km" << std::endl;

    std::cout << "\n=== TESTE 2: Abastecimento ===" << std::endl;
    meuCarro.abastecer(30);
    std::cout << "Abastecidos 30 litros" << std::endl;
    std::cout << "Combustível atual: " << meuCarro.getCombustivel() << " litros" << std::endl;
    std::cout << "Nova autonomia: " << meuCarro.getAutonomia() << " km" << std::endl;

    std::cout << "\n=== TESTE 3: Movimentação normal ===" << std::endl;
    float percorridos = meuCarro.MoverCarro(150);
    std::cout << "Tentou mover 150 km, percorreu " << percorridos << " km" << std::endl;
    std::cout << "Combustível restante: " << meuCarro.getCombustivel() << " litros" << std::endl;
    std::cout << "Km totais: " << meuCarro.getKmRodado() << " km" << std::endl;

    std::cout << "\n=== TESTE 4: Movimentação com combustível insuficiente ===" << std::endl;
    try {
        percorridos = meuCarro.MoverCarro(500);
        std::cout << "Percorreu " << percorridos << " km" << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }
    std::cout << "Combustível restante: " << meuCarro.getCombustivel() << " litros" << std::endl;
    std::cout << "Km totais: " << meuCarro.getKmRodado() << " km" << std::endl;

    std::cout << "\n=== TESTE 5: Tentativa de abastecer valor negativo ===" << std::endl;
    try {
        meuCarro.abastecer(-10);
    } catch (const std::invalid_argument& e) {
        std::cout << "Erro ao abastecer: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 6: Tentativa de mover distância negativa ===" << std::endl;
    try {
        meuCarro.MoverCarro(-50);
    } catch (const std::invalid_argument& e) {
        std::cout << "Erro ao mover: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 7: Cópia de carro ===" << std::endl;
    Carro outroCarro(20, 1000);
    std::cout << "Outro carro criado (20 litros, 1000 km)" << std::endl;
    Carro copia(outroCarro);
    std::cout << "Cópia criada - Combustível: " << copia.getCombustivel() << " litros" << std::endl;
    std::cout << "Cópia criada - Km rodados: " << copia.getKmRodado() << " km" << std::endl;

    std::cout << "\n=== TESTE 8: Atribuição entre carros ===" << std::endl;
    Carro terceiroCarro;
    terceiroCarro = meuCarro;
    std::cout << "Atribuição realizada - Combustível: " << terceiroCarro.getCombustivel() << " litros" << std::endl;
    std::cout << "Atribuição realizada - Km rodados: " << terceiroCarro.getKmRodado() << " km" << std::endl;

    std::cout << "\n=== TESTE 9: Criação com valores inválidos ===" << std::endl;
    try {
        Carro carroInvalido(-10, -20);
    } catch (const std::invalid_argument& e) {
        std::cout << "Erro ao criar carro: " << e.what() << std::endl;
    }
}

int main() {
    try {
        testarCarro();
        std::cout << "\nTodos os testes concluídos com sucesso!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erro inesperado: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}