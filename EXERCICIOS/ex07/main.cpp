/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:42:46 by tlima-de          #+#    #+#             */
/*   Updated: 2025/05/14 11:53:32 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MagicBridge.hpp"
#include "Citizen.hpp"

#define RESET  "\033[0m"
#define RED    "\033[31m"
#define GREEN  "\033[32m"
#define YELLOW "\033[33m"
#define BLUE   "\033[34m"
#define CYAN   "\033[36m"

int main()
{
    Citizen original;
    original.codename = "Tales";
    original.id = 1;

    std::cout << CYAN << "============================================" << RESET << std::endl;
    std::cout << YELLOW << "Original Data address: " << &original << RESET << std::endl;
    std::cout << CYAN << "============================================" << RESET << std::endl;

    uintptr_t raw = MagicBridge::teleport(&original);

    std::cout << BLUE << "Serialized (uintptr_t): " << raw << RESET << std::endl;
    std::cout << CYAN << "============================================" << RESET << std::endl;

    Citizen* recovered = MagicBridge::rematerialize(raw);

    std::cout << YELLOW << "Recovered Citizen address: " << recovered << RESET << std::endl;
    std::cout << CYAN << "============================================" << RESET << std::endl;

    if (recovered == &original)
        std::cout << GREEN << "Success: pointers match!" << RESET << std::endl;
    else
        std::cout << RED << "Failure: pointers do not match!" << RESET << std::endl;

    std::cout << BLUE << "Recovered Citizen ID: " << recovered->id
              << ", Codename: " << recovered->codename << RESET << std::endl;
}
