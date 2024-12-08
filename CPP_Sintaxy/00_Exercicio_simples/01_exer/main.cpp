/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:01:45 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 17:37:06 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Pessoa.hpp"

int main() {
    int tamanho = 1;
    std::vector<Pessoa> clientes;

    for (int i = 0; i < tamanho; i++) {
        std::string nome;
        int idade;
        float altura;

        std::cout << "Digite os dados do cliente " << i + 1 << ":\n";
        std::cout << "Nome: ";
        std::cin >> nome;
        std::cout << "Idade: ";
        std::cin >> idade;
        std::cout << "Altura: ";
        std::cin >> altura;

        clientes.push_back(Pessoa(nome, idade, altura));  // Criação direta
    }
    std::cout << std::endl;

    // Exibindo os dados
    for (int i = 0; i < tamanho; i++) 
    {
        std::cout << " ________________________________" << std::endl;
        std::cout << "|                                |"<< std::endl;
        std::cout << "| Cliente " << i + 1 << ":                     |\n";
        std::cout << "| Nome: " << clientes[i].getName() << "                    \n";
        std::cout << "| Idade: " << clientes[i].getAge() << "                      |\n";
        std::cout << "| Altura: " << clientes[i].getHeight() << "                   |\n";
        std::cout << "|________________________________|"<< std::endl;
    }

    return 0;
}
