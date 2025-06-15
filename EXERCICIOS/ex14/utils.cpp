/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:34:22 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 20:53:46 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "utils.hpp"

void menu()
{
    std::cout << CYAN << " _________________________________" << RESET << std::endl;
    std::cout << CYAN << "|                                 |" << RESET << std::endl;
    std::cout << BOLD << GREEN << "|     Cadastro de Contatos        |" << RESET << std::endl;
    std::cout << CYAN << "|_________________________________|" << RESET << std::endl;
    std::cout << CYAN << "|1." << RESET << "       " << YELLOW << "Adiciona contato" << RESET << "        " << CYAN << "|" << RESET << std::endl;
    std::cout << CYAN << "|2." << RESET << "       " << YELLOW << "Lista todos" << RESET << "             " << CYAN << "|" << RESET << std::endl;
    std::cout << CYAN << "|3." << RESET << "       " << YELLOW << "Buscar contato" << RESET << "          " << CYAN << "|" << RESET << std::endl;
    std::cout << CYAN << "|4." << RESET << "       " << YELLOW << "Atualizar contato" << RESET << "       " << CYAN << "|" << RESET << std::endl;
    std::cout << CYAN << "|5." << RESET << "       " << YELLOW << "Remover contato" << RESET << "         " << CYAN << "|" << RESET << std::endl;
    std::cout << CYAN << "|6." << RESET << "       " << YELLOW << "Sair" << RESET << "                    " << CYAN << "|" << RESET << std::endl;
    std::cout << CYAN << "|_________________________________|" << RESET << std::endl;
}
void addContacto(std::map<std::string, int> &contatos)
{
    std::string nome;
    int telefone;

    std::cin.ignore(); // limpa o buffer antes de getline
    std::cout << YELLOW << "Digite o nome do contato: " << RESET;
    std::getline(std::cin, nome);  // permite espaços

    std::cout << YELLOW << "Digite o número de telefone: " << RESET;
    std::cin >> telefone;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << RED << "✖ Número inválido!" << RESET << std::endl;
        return;
    }

    contatos[nome] = telefone;
    std::cout << GREEN << "✔ Contato adicionado com sucesso!" << RESET << std::endl;
}


void listaContatos(std::map<std::string, int> &contatos)
{
    if (contatos.empty())
    {
        std::cout << RED << "Nenhum contato encontrado." << RESET << std::endl;
        return;
    }

    std::cout << BOLD << CYAN << "Lista de Contatos:" << RESET << std::endl;
    for (std::map<std::string, int>::iterator it = contatos.begin(); it != contatos.end(); ++it)
    {
        std::cout << GREEN << "Nome: " << RESET << it->first
                  << " | " << YELLOW << "Telefone: " << RESET << it->second << std::endl;
    }
}

void buscarContato(std::map<std::string, int> &contatos)
{
    std::string buscarNome;

    std::cin.ignore();
    std::cout << CYAN << "Digite o nome do contato para buscar: " << RESET;
    std::getline(std::cin, buscarNome);

    std::map<std::string, int>::iterator it = contatos.find(buscarNome);

    if (it != contatos.end())
    {
        std::cout << GREEN << "✔ Contato encontrado!" << RESET << std::endl;
        std::cout << GREEN << "Nome: " << RESET << it->first
                  << " | " << YELLOW << "Telefone: " << RESET << it->second << std::endl;
    }
    else
    {
        std::cout << RED << "✖ Usuário não encontrado." << RESET << std::endl;
    }
}


void atualizarContato(std::map<std::string, int> &contatos)
{
    std::string nomeAtual, novoNome;
    int novoNumero;

    std::cout << CYAN << "Digite o nome do contato que deseja alterar: " << RESET;
    std::cin >> nomeAtual;

    std::map<std::string, int>::iterator it = contatos.find(nomeAtual);

    if (it != contatos.end())
    {
        std::cout << GREEN << "✔ Contato encontrado!" << RESET << std::endl;

        std::cout << CYAN << "Digite o novo nome: " << RESET;
        std::cin >> novoNome;

        std::cout << CYAN << "Digite o novo número: " << RESET;
        std::cin >> novoNumero;

        // Remover o antigo e adicionar o novo
        contatos.erase(it);
        contatos[novoNome] = novoNumero;

        std::cout << GREEN << "✔ Contato atualizado com sucesso!" << RESET << std::endl;
    }
    else
    {
        std::cout << RED << "✖ Contato não encontrado." << RESET << std::endl;
    }
}


void remover(std::map<std::string, int> &contatos)
{
    std::string buscarNome;

    std::cout << CYAN << "Digite o nome do contato para apagar: " << RESET;
    std::cin >> buscarNome;
    std::cin.ignore(); // limpa o buffer para evitar problemas com getline depois

    std::map<std::string, int>::iterator it = contatos.find(buscarNome);

    if (it != contatos.end())
    {
        contatos.erase(it);
        std::cout << GREEN << "✔ Contato removido com sucesso!" << RESET << std::endl;
    }
    else
    {
        std::cout << RED << "✖ Usuário não encontrado." << RESET << std::endl;
    }
}

