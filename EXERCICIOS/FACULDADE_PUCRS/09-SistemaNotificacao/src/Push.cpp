/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:39:06 by tlima-de          #+#    #+#             */
/*   Updated: 2025/04/16 13:56:14 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push.hpp"


void Push::enviar() const
{
    std::cout << "Você recebeu uma notificação push!" << std::endl;
};

Push::~Push(){};