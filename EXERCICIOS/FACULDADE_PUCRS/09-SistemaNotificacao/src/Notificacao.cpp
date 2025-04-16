/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Notificacao.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:20:06 by tales             #+#    #+#             */
/*   Updated: 2025/04/16 13:20:37 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/Notificacao.hpp"

Notificacao::Notificacao(){};

void Notificacao::enviar() const
{
    std::cout << "Notificacao padrao:  " << std::endl;
};

Notificacao::~Notificacao(){};