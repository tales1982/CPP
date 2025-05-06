/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:48:54 by tlima-de          #+#    #+#             */
/*   Updated: 2025/05/06 13:08:57 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DetectarTipo.hpp"

int main(int ac,  char **av)
{
    if(ac <= 1)
    {
        std::cout << "ERRO: folta agurmento" << std::endl;
        return 1;
    }

    DetectaTipo::processar(av[1]);

    return 0;    
}