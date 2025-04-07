/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LoginSystem.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:26:15 by tales             #+#    #+#             */
/*   Updated: 2025/04/07 20:33:11 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGINSYSTEM_HPP
#define LOGINSYSTEM_HPP

#include "User.hpp"

class LoginSystem
{
public:
    class AccessDeniedException : public std::exception
    {
    public:
        const char *what() const throw() { return "Access denied - insufficient privileges"; }
    };

    bool authenticate(User &user, int requiredLevel);
};

#endif
