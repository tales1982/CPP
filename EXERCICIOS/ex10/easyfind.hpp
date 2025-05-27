/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:33:21 by tales             #+#    #+#             */
/*   Updated: 2025/05/26 22:06:37 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream> 
#include <vector>
#include <algorithm> 


template <typename T>
typename T::iterator easyfind(T& container, int value);


#include "easyfind.tpp"
#endif