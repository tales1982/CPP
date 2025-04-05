/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:52:23 by tales             #+#    #+#             */
/*   Updated: 2025/04/05 13:51:48 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "utils.hpp"


void menu()
{
    std::cout << "---------------------------------" << std::endl;
    std::cout << "-         Agenda telefonica     -" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "-       1- Adicionar contato    -" << std::endl;
    std::cout << "-       2- Consulta contato     -" << std::endl;
    std::cout << "-       3- Apagar contato       -" << std::endl;
    std::cout << "-       4-     SAIR             -" << std::endl;
    std::cout << "---------------------------------" << std::endl;
}
void addContato(Agenda &contato)
{
    std::string nome;
    std::string sobrenome;
    int telefone;
    
    std::cout << "Digite o nome: ";
    std::cin >> nome;

    std::cout << "Digite o sobrenome: ";
    std::cin >> sobrenome;

    std::cout << "Digite o telefone (somente numeros): ";
    while (!(std::cin >> telefone)) {
        std::cin.clear(); // limpa o erro do cin
        std::cin.ignore(10000, '\n'); // descarta entrada inválida
        std::cout << "Entrada invalida! Digite apenas numeros: ";
    }

    contato.setName(nome);
    contato.setSurName(sobrenome);
    contato.setPhoneNumber(telefone);
    
}

void mostraContato(Agenda contatos[], size_t total, const std::string& buscaNome)
{
    bool encontrado = false;

    for (size_t i = 0; i < total; ++i)
    {
        if (contatos[i].getName() == buscaNome)
        {
            std::cout << "Contato encontrado:\n";
            std::cout << "Nome: " << contatos[i].getName() << "\n";
            std::cout << "Sobrenome: " << contatos[i].getSurname() << "\n";
            std::cout << "Telefone: " << contatos[i].getPhoneNumber() << "\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
    {
        std::cout << "Contato '" << buscaNome << "' não encontrado.\n";
    }
}

void deleta(Agenda contatos[], int& total, const std::string& apagar) {
    bool encontrado = false;

    for (int i = 0; i < total; ++i) {
        if (contatos[i].getName() == apagar) {
            encontrado = true;
            // Desloca os contatos restantes
            for (int j = i; j < total - 1; ++j) {
                contatos[j] = contatos[j + 1];
            }
            --total; // Atualiza total REAL!
            std::cout << "Contato '" << apagar << "' removido com sucesso.\n";
            break;
        }
    }

    if (!encontrado) {
        std::cout << "Contato '" << apagar << "' não encontrado.\n";
    }
}


