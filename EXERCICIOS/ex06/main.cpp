#include <iostream>
#include <string>

int main()
{
    int tamanho;
    int *array;
    int aux = 0;

    std::cout << "Enter the length of the array: ";
    std::cin >> tamanho;
    array = new int[tamanho];
    std::cout << "Enter the elements of the array: ";
    for(int i = 0; i < tamanho; i++)
    {
        std::cin >> *(array + i);
    }


    std::cout << "The elements of the array are: " << std::endl;
    for(int i = 0; i < tamanho; i++)
    {
        std::cout << *(array + i) << " " << std::endl;
    }

    int start = 0;
    int end = tamanho - 1;
    while (start < end)
    {
        aux = *(array + start);
        *(array + start) = *(array + end);
        *(array + end) = aux;
        end--;
        start++;
    }

    std::cout << "===================================" << std::endl;
    std::cout << "The elements of the array are: " << std::endl;
    for(int i = 0; i < tamanho; i++)
    {
        std::cout << *(array + i) << " " << std::endl;
    }



  

    delete[] array;
    array = nullptr; // Avoid dangling pointer
    std::cout << "Array deleted." << std::endl;
    return 0;
}