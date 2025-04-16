/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sms.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:22:51 by tlima-de          #+#    #+#             */
/*   Updated: 2025/04/16 13:35:46 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SMS_HPP
#define SMS_HPP

#include "Notificacao.hpp"

class Sms : public Notificacao
{
private:
    
public:

    void enviar() const;
    ~Sms();
};




#endif