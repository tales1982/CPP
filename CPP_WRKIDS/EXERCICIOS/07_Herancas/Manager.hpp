/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:53:05 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 19:42:50 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "Employee.hpp"
#include<iostream>
#include<string>

class Manager : public Employee
{
    private:
        int _teamSize;
   
    public:
        Manager();
        Manager(std::string name, int id, int size);
        ~Manager();
        void displayInfo() const;

};




#endif