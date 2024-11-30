/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_heap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:17:14 by tales             #+#    #+#             */
/*   Updated: 2024/11/30 20:18:49 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Stack (Pilha)
void stackExample() {
    int x = 10; // Variável alocada na pilha
    int arr[5] = {1, 2, 3, 4, 5}; // Array alocado na pilha
    std::cout << "x: " << x << ", arr[0]: " << arr[0] << std::endl;
    // A memória de x e arr será automaticamente liberada ao final da função.
}

//Heap (Monte)
void heapExample() {
    int* x = new int(10);  // Alocar um inteiro no heap
    int* arr = new int[5]; // Alocar um array no heap

    // Inicializar o array
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }

    std::cout << "x: " << *x << ", arr[0]: " << arr[0] << std::endl;

    // É responsabilidade do programador liberar a memória
    delete x;       // Liberar o inteiro
    delete[] arr;   // Liberar o array
}


int main() {
    stackExample();
    heapExample();
    // x e arr não existem mais aqui.
    return 0;
}
