/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:38:56 by tlima-de          #+#    #+#             */
/*   Updated: 2025/04/16 13:56:51 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_HPP
#define PUSH_HPP

#include "Notificacao.hpp"

class Push : public Notificacao
{
private:
    
public:
    void enviar() const;
    ~Push();
};

#endif