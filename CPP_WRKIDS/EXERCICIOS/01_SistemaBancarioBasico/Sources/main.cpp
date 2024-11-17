/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:04:56 by tales             #+#    #+#             */
/*   Updated: 2024/11/15 23:22:03 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Account.hpp"

int main()
{
    std::vector<ContaBancaria *> clientes; // Array de objetos da classe ContaBancaria
    std::string nome;
    std::string numeroConta;
    size_t opcao;
    bool clienteEncontrado;
    double valor = 0;
    ContaBancaria *menuConta = new ContaBancaria("Menu", "000000"); // Adicionar uma conta fictícia para acessar o menu no index[0]
    clientes.push_back(menuConta);

    do
    {
        clientes[0]->menu();
        std::cout << "Digite sua entrada: ";
        std::cin >> opcao;
        std::cout << std::endl;
        if (opcao == 1)
        { // Novo cliente
            std::cout << "Digite o nome: ";
            std::cin.ignore();            // Limpa o buffer antes de getline
            std::getline(std::cin, nome); // Lê uma linha inteira, incluindo espaços
            std::cout << "Digite o número da conta: ";
            std::cin >> numeroConta; // leitura sem espaços

            // Adiciona o novo cliente ao vetor
            clientes.push_back(new ContaBancaria(nome, numeroConta));
            std::cout << "\033[32mCliente adcionado com sucesso!\033[0m" << std::endl;
        }
        else if (opcao == 2)
        { // depositar
            clienteEncontrado = false;
            std::cout << "Digite o número da conta: ";
            std::cin >> numeroConta;

            for (size_t i = 1; i < clientes.size(); i++)
            {
                if (clientes[i]->getNumeroConta() == numeroConta)
                {
                    std::cout << "Digite o valor a depositar: ";
                    std::cin >> valor;
                    clientes[i]->depositar(valor);
                    clienteEncontrado = true;
                    std::cout << "\033[32mDepósito realizado com sucesso!\033[0m" << std::endl;
                    break;
                }
            }
            if (!clienteEncontrado)
            {
                std::cout << "\033[31mNúmero da conta não encontrado.\033[0m" << std::endl;
            }
        }
        else if (opcao == 3)
        { // saque.
            clienteEncontrado = false;
            std::cin.ignore(); // Limpa o buffer antes de getline
            std::cout << "Digite o nome do cliente: ";
            std::getline(std::cin, nome);
            std::cout << "Digite o número da conta: ";
            std::cin >> numeroConta;
            std::cout << "Qual o valor do saquer.";
            std::cin >> valor;
            for (size_t i = 1; i < clientes.size(); i++)
            {
                if (clientes[i]->getNome() == nome && clientes[i]->getNumeroConta() == numeroConta)
                {
                    if (clientes[i]->getSaldo() >= valor)
                    {
                        clientes[i]->sacar(valor); // Usa o método sacar para atualizar o saldo
                        std::cout << "\033[32mSaque efetuado com sucesso!\033[0m" << std::endl;
                    }
                    else
                    {
                        std::cout << "\033[31mSaldo insuficiente.\033[0m" << std::endl;
                    }
                    clienteEncontrado = true;
                    break;
                }

            }
            if (!clienteEncontrado)
            {
                std::cout << "\033[31mNúmero da conta não encontrado.\033[0m" << std::endl;
            }
        }
        else if (opcao == 4)
        {
            std::cout << "Digite seu numero de conta: ";
            std::cin >> numeroConta;
            for (size_t i = 1; i < clientes.size(); i++)
            {
                if (numeroConta == clientes[i]->getNumeroConta())
                {
                    std::cout << "Saldo atual: " << clientes[i]->getSaldo() << std::endl;
                    clienteEncontrado = true; // Marca como encontrado
                    break;                    // Interrompe o loop ao encontrar o cliente
                }
            }

            if (!clienteEncontrado) // Se nenhum cliente foi encontrado
            {
                std::cout << "\033[31mCliente não encontrado.\033[0m" << std::endl;
            }
        }
        else if (opcao == 5)
            std::cout << "Obrigado e volte sempre" << std::endl;
        std::cout << std::endl;
    } while (opcao != 5);

    for (auto cliente : clientes) {
    delete cliente;
}

    return 0;
}

/*
 Posso fazer desta maneira ou da maneira abaixo....
     ContaBancaria *cliente1 = new ContaBancaria(nome, numeroConta);
     clientes.push_back(cliente1);
 */
/*
 clientes.push_back(new ContaBancaria(nome, numeroConta));
 clientes[0]->depositar(1000);
 clientes[0]->depositar(1000);
 clientes[0]->imprimir();
*/