/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Developer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:53:31 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 19:07:09 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include"Employee.hpp"
#include<string>
#include<iostream>

class Developer: public Employee
{
private:
    std::string _programmingLanguage;
public:
    Developer(std::string nome, int id, std::string language);
    ~Developer();
    void displayInfo() const;
};






#endif