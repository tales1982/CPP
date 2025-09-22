/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sobrecarga.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:10:34 by tales             #+#    #+#             */
/*   Updated: 2025/09/22 09:59:48 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOBRECARGA_HPP
#define SOBRECARGA_HPP

#include <iostream>
#include <string>

class Sobrecarga
{
private:
    std::string _name;
    unsigned int _age;
    int operadorA;
    int operadorB;

public:
    // Forma Canônica Ortodoxa
    Sobrecarga();
    Sobrecarga(const std::string &name, unsigned int age, int a, int b);
    Sobrecarga(const Sobrecarga &other);
    Sobrecarga &operator=(const Sobrecarga &other);
    ~Sobrecarga();

    // Setters
    void setName(std::string name);
    void setAge(unsigned int age);

    // Getters
    const std::string &getName() const;
    unsigned int getAge() const;
    int getOperadorA() const;
    int getOperadorB() const;

    // sobrecarga de operadores
    Sobrecarga operator+(const Sobrecarga &other) const;
    Sobrecarga operator-(const Sobrecarga &other) const;
    bool operator==(const Sobrecarga& other)const;
    bool operator<(const Sobrecarga& other)const;
    Sobrecarga& operator+=(const Sobrecarga& other);
};

 std::ostream& operator<<(std::ostream& out, const Sobrecarga& b);

#endif // SOBRECARGA_HPP