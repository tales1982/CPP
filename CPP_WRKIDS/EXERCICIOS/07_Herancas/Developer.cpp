/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Developer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:53:46 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 19:43:37 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Developer.hpp"

    Developer::Developer(std::string nome, int id, std::string language):Employee(nome, id), _programmingLanguage(language)
    {
        //std::cout<< "Variavel Inicializada: "<< _name << " " << _id << << _programmingLanguage << std::endl;   
    }
    Developer::~Developer()
    {
         //std::cout<< "Variavel destruida: "<< _name << " " << _id << << _programmingLanguage << std::endl;   
    }
    void Developer::displayInfo() const
    {
        std::cout <<"Developer Info: " << std::endl; 
    
        Employee::displayInfo();
    

        std::cout << "Programming Language: " << _programmingLanguage << std::endl;
    }
