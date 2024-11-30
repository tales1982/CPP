/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exer_heap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 21:05:37 by tales             #+#    #+#             */
/*   Updated: 2024/11/30 22:20:36 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercício 2: Usando Heap
Descrição: Crie um programa que armazene números dinamicamente em um array na heap.
O programa deve encontrar o maior número inserido.

Requisitos:

Use new para alocar o array dinamicamente.
Solicite ao usuário que insira números para preencher o array.
Encontre o maior número e libere a memória com delete[].
*/

#include <iostream>

int main()
{
    int *max = new int;

    std::cout << "Digite o tamanho do array: ";
    std::cin >> *max;

    if (*max <= 0) {
        std::cout << "Tamanho inválido!" << std::endl;
        delete max;
        return 1;
    }

    // Aloca o array dinamicamente
    int *numbers = new int[*max];

    // Preenche o array
    for (int i = 0; i < *max; i++) {
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> numbers[i];
    }

    // Encontra o maior número
    int maior = numbers[0];
    for (int i = 1; i < *max; i++) {
        if (numbers[i] > maior) {
            maior = numbers[i];
        }
    }

    // Exibe o maior número
    std::cout << "O maior número é: " << maior << std::endl;

    // Libera a memória
    delete[] numbers;
    delete max;

    return 0;
}
