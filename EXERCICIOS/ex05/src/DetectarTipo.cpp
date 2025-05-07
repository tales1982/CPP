/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectarTipo.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:44:32 by tlima-de          #+#    #+#             */
/*   Updated: 2025/05/07 13:18:43 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DetectarTipo.hpp"

void DetectaTipo::processar(const std::string &entrada)
{

    if (ehChar(entrada))
    {
        std::cout << "CHAR: '" << entrada << "'" << std::endl;
    }
    else if (entrada.length() == 1 && std::isdigit(entrada[0]))
    {
        std::cout << "INTEIRO: " << entrada << std::endl;
    }
    else
    {
        std::cout << "Entrada complexa ou inválida: " << entrada << std::endl;
    }
}

bool DetectaTipo::ehChar(const std::string &s)
{
    int len = s.length();
    char c;
    for (int i = 0; i < len; i++)
    {
        c = s[i];
        if (static_cast<unsigned char>(c) < 32 || static_cast<unsigned char>(c) > 126)
        {
            return false; // Não é um caractere ASCII imprimível
        }
    }
    return true; // Todos os caracteres são válidos
}

bool DetectaTipo::ehInt(const std::string &s)
{
    (void)s;
    return false;
}

bool DetectaTipo::ehFloat(const std::string &s)
{
    (void)s;
    return false;
}

bool DetectaTipo::ehDouble(const std::string &s)
{
    (void)s;
    return false;
}