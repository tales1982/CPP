/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:35:59 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 10:46:37 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pessoa.hpp"

int main()
{
    Pessoa pessoa1("Tales",42,1.82);
    Pessoa pessoa2 = pessoa1;
    Pessoa pessoa3 = pessoa1;
    Pessoa pessoa4 = pessoa2 = pessoa1;
    
    std::cout << "===================================" << std::endl;
    std::cout << pessoa1 << std::endl;
    std::cout << "===================================" << std::endl;
    std::cout << "Operador copia" << std::endl;
    std::cout << pessoa2 << std::endl;
    std::cout << "===================================" << std::endl;
    std::cout << "Operador atribuicao" << std::endl;
    std::cout << pessoa3 << std::endl;
    std::cout << "===================================" << std::endl;
    std::cout << "Operador atribuicao encadeado" << std::endl;
    std::cout << pessoa4 << std::endl;
    std::cout << "===================================" << std::endl;
}