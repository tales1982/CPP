/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:55:29 by tales             #+#    #+#             */
/*   Updated: 2025/04/09 13:16:13 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Condicionador.hpp"

int main()
{
    Condicionador ar(5, 25);
    Condicionador ar2(10, 31);
    try
    {
        std::cout << "=================================" << std::endl;
        std::cout <<"========== Condicionador 1: ========"<<std::endl;
        std::cout << ar;
        std::cout << "=================================" << std::endl;
        std::cout << "=================================" << std::endl;
        std::cout <<"========== Condicionador 2: ========"<<std::endl;
        std::cout << ar2;
        std::cout << "=================================" << std::endl;
   
        
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}