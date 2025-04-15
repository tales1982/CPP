/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:16:48 by tales             #+#    #+#             */
/*   Updated: 2025/04/15 13:54:10 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Notificacao.hpp"
#include "../include/Email.hpp"


int main() {
   Notificacao A;
   Notificacao *B = new Email();
   
   A.enviar();
   B->enviar();
   
   delete(B);
    return 0;
}