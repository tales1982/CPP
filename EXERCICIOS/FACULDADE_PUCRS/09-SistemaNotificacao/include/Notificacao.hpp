/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Notificacao.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:08:52 by tales             #+#    #+#             */
/*   Updated: 2025/04/15 11:14:00 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Notificacao.hpp
#ifndef NOTIFICACAO_HPP
#define NOTIFICACAO_HPP

#include <iostream>
#include <string>


class Notificacao {
private:

public:
Notificacao();
virtual void enviar() const;
virtual ~Notificacao();
};

#endif // Notificacao_HPP
