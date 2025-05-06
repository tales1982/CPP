/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectarTipo.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:44:42 by tlima-de          #+#    #+#             */
/*   Updated: 2025/05/06 13:03:28 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DETECTATIPO_HPP
#define DETECTATIPO_HPP

#include <iostream>
#include <string>

class DetectaTipo {
public:
    static void processar(const std::string& entrada);

private:
    static bool ehChar(const std::string& s);
    static bool ehInt(const std::string& s);
    static bool ehFloat(const std::string& s);
    static bool ehDouble(const std::string& s);
};

#endif
