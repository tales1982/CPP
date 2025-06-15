/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:05:41 by tales             #+#    #+#             */
/*   Updated: 2025/06/14 12:59:29 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

Student::Student(const std::string& name, const int grade) : _name(name), _grade(grade) {};

Student::~Student()
{
    std::cout << this->_name << ": My work is finishing." << std::endl;
};

void Student::SetNewName(const std::string &newname)
{
    _name = newname;
};

void Student::setGrade(int newgrade) {
    _grade = newgrade;
};

const std::string &Student::getName() const
{
    return _name;    
};

int Student::getGrade() const
{
    return _grade;
};

void Student::modifyValue(int* a, int& b)
{
    if (a) *a += 1;
    b += 2;
    
}

void Student::printStudent() const
{
     std::cout << "Name: " << _name << ", grade: " << _grade << '\n';
};