/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:52:48 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 19:51:04 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Relogio.hpp"

int main()
{
    int h, m, s;
    try
    {
        Relogio relogio2;

        relogio2.setHora(23, 59, 59);
        
        relogio2.getHora(h, m, s);
        std::cout <<"======================="<<std::endl;
        std::cout << "Antes: " << h << ":" << m << ":" << s << std::endl;
        relogio2.avancar();
        std::cout <<"-"<<std::endl;
        relogio2.getHora(h, m, s); // <-- atualiza h, m, s depois de avançar
        std::cout << "Depois: " << h << ":" << m << ":" << s << std::endl;        
        std::cout <<"======================="<<std::endl;
        relogio2.getHora(h, m, s);
        std::cout << "Antes: " << h << ":" << m << ":" << s << std::endl;
        relogio2.avancar();
        std::cout <<"-"<<std::endl;
        relogio2.getHora(h, m, s); // <-- atualiza h, m, s depois de avançar
        std::cout << "Depois: " << h << ":" << m << ":" << s << std::endl;      
        std::cout <<"======================="<<std::endl;
        relogio2.getHora(h, m, s);
        std::cout << "Antes: " << h << ":" << m << ":" << s << std::endl;
        relogio2.avancar();
        std::cout <<"-"<<std::endl;
        relogio2.getHora(h, m, s); // <-- atualiza h, m, s depois de avançar
        std::cout << "Depois: " << h << ":" << m << ":" << s << std::endl;      
        std::cout <<"======================="<<std::endl;
        relogio2.getHora(h, m, s);
        std::cout << "Antes: " << h << ":" << m << ":" << s << std::endl;
        relogio2.avancar();
        std::cout <<"-"<<std::endl;
        relogio2.getHora(h, m, s); // <-- atualiza h, m, s depois de avançar
        std::cout << "Depois: " << h << ":" << m << ":" << s << std::endl;      
        std::cout <<"======================="<<std::endl;
   

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

