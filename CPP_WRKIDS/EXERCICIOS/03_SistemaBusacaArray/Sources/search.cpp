/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:54:11 by tales             #+#    #+#             */
/*   Updated: 2024/11/17 15:35:32 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/search.hpp"

Decrescente::Decrescente(/* args */)
{
}

Decrescente::~Decrescente()
{
}

void Decrescente::digNumber(int num[5]) {
    std::cout << "Digite 5 numeros diferentes:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o numero " << i + 1 << ": ";
        std::cin >> num[i];
    }
}


void Decrescente::printNumbre(int num[5])
{
        std::cout <<  std::endl;
       for (size_t i = 0; i < 5; i++)std:: cout << num[i] << std::endl;
}

void Decrescente::ordenaNumbre(int num[5])
{
    int j;
    int i;
    int aux;

    i = 0;
    j = 0;
    
    while(i < 5)
    {
        j = i + 1;
        while(j < 5)
        {
            if(num[i] < num[j])
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
                
            }
            j++;
        }
        i++;
        
    }
}

