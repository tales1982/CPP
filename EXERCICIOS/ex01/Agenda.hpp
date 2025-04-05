/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agenda.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:15:16 by tales             #+#    #+#             */
/*   Updated: 2025/04/05 13:15:17 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <string>

class Agenda
{
private:
    std:: string _name;
    std:: string _surName;
    int _phoneNumber;


public:
    Agenda();
    Agenda(const std::string&, const std::string& surname, int phoneNumber = 0);
    Agenda(const Agenda& other); //copia
    Agenda& operator=(const Agenda& other); //atribuicao
    ~Agenda();

    //Set
    void setName(const std::string& name);
    void setSurName(const std::string& surName);
    void setPhoneNumber(int number);


    //get
    std::string getName() const;
    std::string getSurname()const;
    int getPhoneNumber()const;



};

#endif