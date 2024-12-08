/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:11:57 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 13:59:01 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>

class Employee {
protected:
    std::string _name;

public:
    Employee(const std::string& name);
    virtual ~Employee();

    virtual float calculateSalary() const = 0; // Virtual pura
    void setName(const std::string& name); // Corrigido o retorno
    std::string getName() const;
};

#endif

