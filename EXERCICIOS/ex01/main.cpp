/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:52:09 by tales             #+#    #+#             */
/*   Updated: 2025/04/07 19:09:28 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.hpp"
#include "utils.hpp"

int main()
{
    Agenda dadoDefault("Thales", "Lima", 123456789);
    Agenda contatos[8];
    std::string buscarNome;
    std::string apagarNome;

    int option;
    int i = 0;

    do
    {
        menu();
        std::cin >> option;
        switch (option)
        {
        case 1:
            std::cout << ">> Adicionando novo contato..." << std::endl;
            if (i < 8)
            {

                addContato(contatos[i]);
                i++;
            }
            else
                std::cout << ">> A lista de contato esta cheia..." << std::endl;
            break;
        case 2:
            std::cout << ">> Consultar contato..." << std::endl;
            std::cout << "Digite o nome: ";
            std::cin >> buscarNome;
            mostraContato(contatos, i, buscarNome);
            break;
            case 3: {
                std::cout << ">> Apagar um contato..." << std::endl;
                std::string nomeApagar;
                std::cout << "Digite o nome: ";
                std::cin >> nomeApagar;
                deleta(contatos, i, nomeApagar);
                break;
            }
            
        case 4:
            std::cout << ">>  Saindo do programa...." << std::endl;
            break;
        default:
            std::cout << ">> Opcao invalida! Tente novamente." << std::endl;
            break;
        }

    } while (option != 4);

    return 0;
}