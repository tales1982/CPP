/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectarTipo.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:44:32 by tlima-de          #+#    #+#             */
/*   Updated: 2025/05/06 13:45:49 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DetectarTipo.hpp"

void DetectaTipo::processar(const std::string &entrada)
{

    if (entrada.length() == 1 && std::isdigit(entrada[0]))
    {
        std::cout << "INTEIRO: " << entrada << std::endl;
    }
    else if (entrada.length() == 1 && std::isalpha(entrada[0]))
    {
        std::cout << "CHAR: '" << entrada << "'" << std::endl;
    }
    else
    {
        std::cout << "Entrada complexa ou inválida: " << entrada << std::endl;
    }
}

bool DetectaTipo::ehChar(const std::string &s)
{
    (void)s;
    return false;
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