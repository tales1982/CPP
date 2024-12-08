/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:28:01 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 14:43:23 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HourlyEmployee.hpp"
#include "SalariedEmployee.hpp"
#include <iostream>
#include <vector>

int main() {
    int numEmployees;
    std::vector<Employee*> employees; // Armazena ponteiros de Employee

    std::cout << "Quantos funcionários deseja adicionar? ";
    std::cin >> numEmployees;

    for (int i = 0; i < numEmployees; ++i) {
        std::cout << "\nAdicionando funcionário " << i + 1 << ":\n";
        std::cout << "Digite 1 para Horista ou 2 para Assalariado: ";
        int type;
        std::cin >> type;

        if (type == 1) { // Horista
            std::string name;
            float horas, precoHora;

            std::cout << "Digite o nome do funcionário: ";
            std::cin >> name;
            std::cout << "Digite as horas trabalhadas: ";
            std::cin >> horas;
            std::cout << "Digite o valor por hora: ";
            std::cin >> precoHora;

            HourlyEmployee* hourly = new HourlyEmployee(name);
            hourly->setHoras(horas);
            hourly->setPrecoHora(precoHora);
            employees.push_back(hourly);
        } else if (type == 2) { // Assalariado
            std::string name;
            float salarioMensal;

            std::cout << "Digite o nome do funcionário: ";
            std::cin >> name;
            std::cout << "Digite o salário mensal: ";
            std::cin >> salarioMensal;

            SalariedEmployee* salaried = new SalariedEmployee(name);
            salaried->setSalario(salarioMensal);
            employees.push_back(salaried);
        } else {
            std::cout << "Opção inválida. Tente novamente.\n";
            --i; // Repetir este índice
        }
    }

    std::cout << "\n--- Lista de Funcionários ---\n";
    for (size_t i = 0; i < employees.size(); ++i) {
        std::cout << "Funcionário " << i + 1 << ": " << employees[i]->getName() << "\n";
        std::cout << "Salário: R$ " << employees[i]->calculateSalary() << "\n\n";
    }

    // Libera a memória alocada
    for (std::vector<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it) {
    delete *it;
}


    return 0;
}
