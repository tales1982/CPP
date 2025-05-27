/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:33:09 by tales             #+#    #+#             */
/*   Updated: 2025/05/26 22:05:12 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);

    try {
        std::vector<int>::iterator it = easyfind(num, 2);
        std::cout << "Valor encontrado: " << *it << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(num, 42);
        std::cout << "Valor encontrado: " << *it << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
