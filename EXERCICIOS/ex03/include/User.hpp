/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:41:25 by tales             #+#    #+#             */
/*   Updated: 2025/04/07 20:41:21 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_HPP
#define USER_HPP

#include <iostream>
#include <string>
#include <stdexcept>

// Cores ANSI como variáveis
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RESET = "\033[0m";

class User
{
private:
    const std::string _username;
    const int _accessLevel;
    bool _isLoggedIn;

public:
    // Canonical Orthodox Form
    User();                                             // Construtor padrão
    User(const std::string &username, int accessLevel); // Construtor com parâmetros
    User(const User &other);                            // Construtor de cópia
    User &operator=(const User &other);                 // Operador de atribuição
    ~User();                                            // Destrutor

    // Getters
    std::string getUsername() const;
    int getAccessLevel() const;
    bool getIsLoggedIn() const;

    void login();
    void logout();

    class InvalidAccessLevelException : public std::exception {
        public:
            const char *what() const throw();
        };
};

#endif