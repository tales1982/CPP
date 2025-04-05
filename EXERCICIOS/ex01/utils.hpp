/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:15:29 by tales             #+#    #+#             */
/*   Updated: 2025/04/05 13:50:36 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef UTILS_HPP
#define UTILS_HPP

#include "Agenda.hpp"

void menu();
void addContato(Agenda& contato);
void mostraContato(Agenda contatos[], size_t total, const std::string& buscaNome);
void deleta(Agenda contatos[], int& total, const std::string&  apagar);


#endif
