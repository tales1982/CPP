/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Taboada.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:47:49 by tales             #+#    #+#             */
/*   Updated: 2024/11/17 13:29:34 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Taboada.hpp"

void Tabuada(int n1, int n2)
{
    if (n2 > 10) // Condição de parada
        return;

    // Exibe o resultado da multiplicação antes da chamada recursiva
    std::cout << n1 << " x " << n2 << " = " << n1 * n2 << std::endl;

    // Chamada recursiva para incrementar n2
    Tabuada(n1, n2 + 1);
}