/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:08:11 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 17:42:18 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <iostream>
#include <string>

int main(void)
{
    std::map<std::string, std::string> nomes;

    nomes["Tales"] = "Tales Lima De Paula";
    nomes["Theo"] = "Theo Lima De Paula";
    nomes["Thomas"] = "Thomas Lima De Paula";
    nomes["Suelia"] = "Suelia Moreira";
    nomes["Maria"] = "Maria Oliveira";

    std::cout << "Antes de apagar:\n";
    for (std::map<std::string, std::string>::iterator it = nomes.begin(); it != nomes.end(); ++it)
    {
        std::cout << "Chave: " << it->first << ", Valor: " << it->second << std::endl;
    }

    std::string chave = "Suelia";
    std::map<std::string, std::string>::iterator itName = nomes.find(chave);

    if (itName != nomes.end()) {
        std::cout << "\nApagando: " << itName->first << std::endl;
        nomes.erase(itName); //  Apaga corretamente
    } else {
        std::cout << "\nChave '" << chave << "' não encontrada." << std::endl;
    }

    //se quizer apagar diretamente sabendo que o elemento existe pode fazer
    nomes.erase("Maria");
    std::cout << "\nApagando: " << "Maria" << std::endl;

    std::cout << "\nDepois de apagar:\n";
    for (std::map<std::string, std::string>::iterator it = nomes.begin(); it != nomes.end(); ++it)
    {
        std::cout << "Chave: " << it->first << ", Valor: " << it->second << std::endl;
    }

    return 0;
}
