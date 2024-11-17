/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:54:19 by tales             #+#    #+#             */
/*   Updated: 2024/11/17 15:53:12 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/search.hpp"

int main() {
    int numbers[5];
    int search;
    int index;
    
    Decrescente decrescente;

    decrescente.digNumber(numbers);
    std::cout <<  std::endl;
    
    std::cout << "Os numeros digitados foram: ";
    decrescente.printNumbre(numbers);
    std::cout << std::endl;

    std::cout << "Os numeros ordenados: ";
    decrescente.ordenaNumbre(numbers);
    decrescente.printNumbre(numbers);

    
    while(1)
    {
        std::cout << "Digite o numero que vc quer encontra: ";
        std::cin >> search;
        index = decrescente.RetornaIndex(numbers,search);
        std::cout << "Seu numero esta no index : " << index << std::endl;
    }
    return 0;
}