/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:56:11 by coder             #+#    #+#             */
/*   Updated: 2025/05/26 13:33:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.cpp"

int main() {
    std::cout << "==============================================" << std::endl;
    std::cout << "|                    ARRAY                   |" << std::endl;
    std::cout << "==============================================" << std::endl;
    ft_print_Size();//Tamanho do array
    ft_print_Push_Back();//Adciona na ultima possicao um elemento no array
    ft_print_Pop_Back();// Remove um elemno da ultima posicao
    ft_print_At();//Acesando um elemeto no array com segurana
    ft_printOperator();
    ft_print_Resize();
    ft_print_ShrinkToFit();
    ft_print_Capacity();
}