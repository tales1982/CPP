/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:16:48 by tales             #+#    #+#             */
/*   Updated: 2025/04/16 13:55:40 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Notificacao.hpp"
#include "../include/Email.hpp"
#include "../include/Sms.hpp"
#include "../include/Push.hpp"


int main() {
   Notificacao A1;
   Notificacao *B = new Email();
   
   Notificacao A2;
   Notificacao *C = new Sms();
   
   Notificacao A3;
   Notificacao *D = new Push();
   
   
   A1.enviar();
   B->enviar();
   C->enviar();
   D->enviar();
   
   delete(B);
    return 0;
}