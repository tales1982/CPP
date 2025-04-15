/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Email.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:00:45 by tlima-de          #+#    #+#             */
/*   Updated: 2025/04/15 11:14:16 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMAIL_HPP
#define EMAIL_HPP

#include "Notificacao.hpp"

class Email : public Notificacao
{
private:
   
public:
    void enviar() const;
};


#endif