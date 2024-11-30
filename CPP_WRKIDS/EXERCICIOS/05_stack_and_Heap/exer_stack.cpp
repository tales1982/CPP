/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exer_stack.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:30:12 by tales             #+#    #+#             */
/*   Updated: 2024/11/30 21:03:55 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercício 1: Usando Stack
Descrição: Crie um programa que armazene números em um array na pilha. 
O programa deve calcular a soma e a média dos números armazenados.

Requisitos:

Declare um array de tamanho fixo no stack.
Solicite ao usuário que insira números para preencher o array.
Calcule e imprima a soma e a média dos números.
*/
#include <iostream>

int main()
{
    int arr[5];
    int aux = 0;
    int soma = 0;
    float media = 0.0;

    
 // Loop para entrada dos números
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite um número: ";
        std::cin >> aux;
        arr[i] = aux;
    }

    // Loop para exibir os números
    for (int i = 0; i < 5; i++) {
        soma += arr[i];
    }
      media = static_cast<float>(soma) / 5;
    std::cout << "A soma dos número [" << soma << "] = " << std::endl;
    std::cout << "A Media é [" << media << "] = " << std::endl;

    
    return(0);
}