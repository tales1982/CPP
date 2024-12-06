/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:51:46 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 18:54:18 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include<iostream>
#include<string>

class Employee
{
    protected:
        std::string _name;
        int _id;
    public:
        Employee();
        Employee(std::string name, int id);
        virtual ~Employee();
        virtual void displayInfo() const;
};

#endif

