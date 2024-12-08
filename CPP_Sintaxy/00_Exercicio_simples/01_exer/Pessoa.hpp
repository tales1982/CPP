/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pessoa.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:25:07 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 17:09:26 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <string>
#include <vector>

class Pessoa
{
private:
    std::string _name;
    int _age;
    float _height;
public:
    Pessoa();
    Pessoa(std::string name, int age, float height);
    ~Pessoa();
    
    void setName(std::string name);
    void setAge(int age);
    void setHeight(float height);
    
    std::string getName();
    int getAge();
    float getHeight();
    
    void setInfo(std::string name, int age, float height);
    
};



#endif