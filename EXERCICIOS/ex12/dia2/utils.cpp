/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:52:58 by tales             #+#    #+#             */
/*   Updated: 2025/06/17 12:09:01 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"


char* duplicateString(const char* src)
{
    if(src == nullptr)
        return nullptr;
    
   
    int size = strlen(src) + 1;
    char* copy = new char[size];

    for( int i = 0; i < size ; i++)
    {
        copy[i] = src[i];
    }

    return copy;
};
