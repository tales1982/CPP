/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HourlyEmployee.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:15:46 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 14:02:28 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOURLYEMPLOYEE_HPP
#define HOURLYEMPLOYEE_HPP

#include "Employee.hpp"

class HourlyEmployee : public Employee {
private:
    float _horasTrabalada ;
    float _precoHora ;

public:
    HourlyEmployee(const std::string& name); // Construtor para inicializar o nome
    ~HourlyEmployee();

    void setHoras(float horas);
    void setPrecoHora(float precoHora);

    float calculateSalary() const; // Corrigido para incluir override
    float getSalarioHora() const;
    float getHorasTrabalhada() const;
};

#endif
