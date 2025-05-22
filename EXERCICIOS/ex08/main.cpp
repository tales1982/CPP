/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:53:13 by tales             #+#    #+#             */
/*   Updated: 2025/05/22 22:36:23 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myswap.hpp"
#include <iostream>
#include <string>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"

int	main(void)
{
	std::cout << GREEN << "================ INTERGER ================" << RESET << std::endl;
	int a = 10;
	int b = 20;
	std::cout << BLUE << "Valor original de A : " << a << std::endl;
	std::cout << BLUE << "Valor original de B : " << b << std::endl;
	myswap(a, b);
	std::cout << YELLOW <<"Valor SWAP de A : " << a << std::endl;
	std::cout << YELLOW << "Valor SWAP de B : " << b << std::endl;
	std::cout << RED << "Valor MIN : " << ft_min(a, b) << std::endl;
	std::cout << CYAN << "Valor MAX : " << ft_max(a, b) << std::endl;

	std::cout << GREEN << "================  STRING ================" << RESET << std::endl;
	std::string str1 = "Theo";
	std::string str2 = "Thomas";
	std::cout << BLUE << "Valor original de STR1 : " << str1 << RESET << std::endl;
	std::cout << BLUE << "Valor original de STR2 : " << str2 << RESET << std::endl;
	myswap(str1, str2);
	std::cout << YELLOW << "Valor SWAP de STR1 : " << str1 << RESET << std::endl;
	std::cout << YELLOW << "Valor SWAP de STR2 : " << str2 << RESET << std::endl;
	std::cout << RED <<"Valor MIN : " << ft_min(str1, str2) << RESET << std::endl;
	std::cout << CYAN <<  "Valor MAX : " << ft_max(str1, str2) << RESET << std::endl;
}