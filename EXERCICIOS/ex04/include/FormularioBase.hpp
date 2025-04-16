/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormularioBase.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:58:44 by tlima-de          #+#    #+#             */
/*   Updated: 2025/04/16 13:08:35 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMULARIOBASE_HPP
#define FORMULARIOBASE_HPP

#include <string>
#include <stdexcept>
#include "Burocrata.hpp"

class Burocrata; // forward declaration

class FormularioBase {
private:
    std::string nome;
    std::string alvo;
    bool assinado;
    int grauParaAssinar;
    int grauParaExecutar;

public:
    FormularioBase(const std::string& nome, const std::string& alvo, int grauAssinar, int grauExecutar);
    virtual ~FormularioBase();

    const std::string& getNome() const;
    const std::string& getAlvo() const;
    bool estaAssinado() const;
    int getGrauParaAssinar() const;
    int getGrauParaExecutar() const;

    void serAssinado(const Burocrata& b);

    virtual void executar(const Burocrata& executor) const = 0; // método puro virtual
};

#endif
