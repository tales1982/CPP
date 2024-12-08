/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SalariedEmployee.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:14:35 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 14:39:59 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SALARIEDEMPLOYEE_HPP
#define SALARIEDEMPLOYEE_HPP

#include "Employee.hpp"

class SalariedEmployee : public Employee {
private:
    float _salario ;


public:
   SalariedEmployee(const std::string& name); // Construtor para inicializar o nome
    ~SalariedEmployee();



    float calculateSalary() const; // Corrigido para incluir override
    void setSalario(float salarioMensal); // Alterado o nome
    float getSalario() const;
};

#endif
