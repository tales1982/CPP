/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:54:30 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 19:44:47 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Employee.hpp"
#include "Manager.hpp"
#include "Developer.hpp"

int main()
{
    // Criação de objetos das classes derivadas
    Manager manager("Theo", 2, 10);
    Developer developer("Thomas", 3, "Java");

    // Vetor de ponteiros da classe base
    Employee *employees[2];
    employees[0] = &manager;   // Manager como Employee*
    employees[1] = &developer; // Developer como Employee*

    // Exibição polimórfica de informações
    for (int i = 0; i < 2; ++i) {
        std::cout << std::endl;
        employees[i]->displayInfo(); // Chamadas polimórficas
    }
/*
    std::cout << std::endl;
    employees[0]->displayInfo();
    std::cout << std::endl;
    employees[1]->displayInfo();

    delete employees[0];
    delete employees[1];
*/

    return 0;
}
