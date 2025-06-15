/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:29:51 by tales             #+#    #+#             */
/*   Updated: 2025/06/14 13:00:03 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

int main(void)
{
    Student aluno1("Tales", 9);
    int x = 3, y = 5;
    
    aluno1.printStudent();
    aluno1.modifyValue(&x, y);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    aluno1.setGrade(10);
    
    aluno1.printStudent();
    return 0;
}