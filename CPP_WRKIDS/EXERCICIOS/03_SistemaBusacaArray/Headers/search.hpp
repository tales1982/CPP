/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:51:03 by tales             #+#    #+#             */
/*   Updated: 2024/11/17 15:48:47 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCH_HPP
#define SEARCH_HPP

#include <iostream>

class Decrescente
{
private:


public:
    Decrescente(/* args */);
    ~Decrescente();
    void digNumber(int num[5]);
    void printNumbre(int num[5]);
    void ordenaNumbre(int num[5]);
    int RetornaIndex(int num[5], int n);
};

#endif