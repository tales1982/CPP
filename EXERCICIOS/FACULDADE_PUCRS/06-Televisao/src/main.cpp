/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 07:48:21 by tales             #+#    #+#             */
/*   Updated: 2025/04/09 09:36:11 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Televisao.hpp"

int main()
{
    try
    {
        Televisao tv;  // Usa valores padrão (ex: volume=10, canal=1)
        
        // Mudar de canal algumas vezes:
        tv.proximoCanal();    // canal agora é 2
        tv.proximoCanal();    // canal agora é 3
        tv.setCanal(15);      // canal agora é 15

        // Aumentar um pouco o volume:
        tv.aumentarVolume();  // volume agora é 11
        tv.aumentarVolume();  // volume agora é 12
        tv.aumentarVolume();  // volume agora é 13

        // Exibir atributos:
        std::cout << tv;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
}
