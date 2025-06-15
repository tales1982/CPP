/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:52:13 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 20:35:10 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>

void menu();

void addContacto(std::map<std::string, int>& contatos);

void listaContatos(std::map<std::string, int> &contatos);

void buscarContato(std::map<std::string, int> &contatos);

void atualizarContato(std::map<std::string, int> &contatos);

void remover(std::map<std::string, int> &contatos);