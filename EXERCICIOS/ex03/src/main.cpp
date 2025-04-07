/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:33:56 by tales             #+#    #+#             */
/*   Updated: 2025/04/07 21:04:32 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/User.hpp"
#include "../include/LoginSystem.hpp"

int main() {
    try {
        // Teste 1: Usuário válido
        User normalUser("john_doe", 3);
        LoginSystem system;
        
        // Tenta acessar recurso que requer nível 2
        try {
            system.authenticate(normalUser, 2);
            std::cout << normalUser.getUsername() << " logged in successfully! nivel 2\n";
        } catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << "\n";
        }
        
        // Tenta acessar recurso que requer nível 4
        try {
            system.authenticate(normalUser, 1);
            std::cout << normalUser.getUsername() << " logged in successfully! nivel4\n";
        } catch (const std::exception& e) {
            std::cout << "Error for " << normalUser.getUsername() << ": " << e.what() << "\n";
        }
        
        // Teste 2: Usuário inválido
        User invalidUser("hacker", 0); // Isso lançará exceção
    } catch (const std::exception& e) {
        std::cout << "Failed to create user: " << e.what() << "\n";
    }
    
    return 0;
}