#include <iostream>
#include <map>
#include <string>
#include "utils.hpp"
#include "Colors.hpp"

int main(void)
{
    std::map<std::string, int> contatos;
    int opcao;

    do
    {
        menu();
        std::cout << "Opção: ";
        std::cin >> opcao;

        if (std::cin.fail()) {
            std::cin.clear(); // limpa o erro
            std::cin.ignore(1000, '\n'); // descarta entrada inválida
            std::cout << RED << "✖ Entrada inválida. Digite um número válido!\n" << RESET;
            continue;
        }

        switch (opcao)
        {
        case 1:
            addContacto(contatos);
            break;
        case 2:
            listaContatos(contatos);
            break;
        case 3:
            buscarContato(contatos);
            break;
        case 4:
            atualizarContato(contatos);
            break;
        case 5:
            remover(contatos);
            break;
        case 6:
            std::cout << GREEN << "Saindo do programa...\n" << RESET;
            break;
        default:
            std::cout << RED << "✖ Opção inválida. Tente novamente.\n" << RESET;
            break;
        }

    } while (opcao != 6);

    return 0; // boa prática indicar retorno explícito
}
