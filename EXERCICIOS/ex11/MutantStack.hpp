/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaxStack.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 10:53:04 by tales             #+#    #+#             */
/*   Updated: 2025/05/30 16:13:11 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

// Classe template que herda de std::stack
template <typename T>
class MutantStack : public std::stack<T> {
public:
    // Construtores e destrutor
    MutantStack() {}
    MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {}
    ~MutantStack() {}

    MutantStack<T>& operator=(const MutantStack<T>& other) {
        std::stack<T>::operator=(other);
        return *this;
    }

    // Definimos os tipos de iteradores baseados no container interno
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    // Métodos para obter os iteradores
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};

