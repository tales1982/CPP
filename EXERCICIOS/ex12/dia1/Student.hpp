/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:45:17 by tales             #+#    #+#             */
/*   Updated: 2025/06/14 12:57:55 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Student
{
private:
    std::string _name; 
    int _grade;
    
public:
    Student(const std::string& name, const int grade);
    ~Student();

    void SetNewName(const std::string& newname);
    void setGrade(int newgrade);

    void modifyValue(int* a, int& b);

    const std::string& getName()const ;
    int getGrade()const ;
    
    void printStudent()const ;
};

