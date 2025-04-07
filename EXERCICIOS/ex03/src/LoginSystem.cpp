/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LoginSystem.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:28:39 by tales             #+#    #+#             */
/*   Updated: 2025/04/07 20:36:01 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/LoginSystem.hpp"

bool LoginSystem::authenticate(User& user, int requiredLevel) {
    if (user.getAccessLevel() >= requiredLevel) {
        user.login();
        return true;
    }
    throw AccessDeniedException();
}