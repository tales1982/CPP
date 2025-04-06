/*
🧪 Exercício: Validador de Idade
🎯 Objetivo:
Crie um programa que:
Solicite que o usuário digite a idade de uma pessoa.
Lance uma exceção caso a idade:
Seja negativa.
Seja maior que 130.
Caso contrário, imprima "Idade válida: X anos".
Use try, catch e throw para lidar com as exceções.
*/

#include"Dados.hpp"

int main()
{
    Dados dados;
    std::string nome;
    int idade;

    try
    {
        std::cout<< "Digite seu nome: ";
        std::cin >> nome;
        dados.setName(nome);

        std::cout<<"Digite a sua idade: ";
        std::cin >> idade;
        dados.setAge(idade);

        std::cout << dados << std::endl; // Aqui usa o operador << sobrecarregado
        //std::cout << dados.getName() << " tem "<< dados.getAge() << " anos de idade." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}