/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myswap.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:44:23 by tales             #+#    #+#             */
/*   Updated: 2025/05/22 22:25:13 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSWAP_HPP
# define MYSWAP_HPP

template <typename T>
void myswap(T &a, T &b)
{
    T temp;
    temp = b;
    b = a;
    a = temp;
}
template <typename T>
T ft_min(T a, T b)
{
    if(a < b)
        return a;
    return b;
}
template <typename T>
T ft_max(T a, T b)
{
    if(a > b)
        return a;
    return b;
}

#endif