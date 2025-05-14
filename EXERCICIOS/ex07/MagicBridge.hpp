/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MagicBridge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:42:44 by tlima-de          #+#    #+#             */
/*   Updated: 2025/05/14 11:02:24 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAGICBRIDGE_HPP
#define MAGICBRIDGE_HPP

#include <string>
#include <iostream>
#include <stdint.h>
#include "Citizen.hpp"

class MagicBridge
{
private:
    MagicBridge(/* args */);
    MagicBridge(const MagicBridge& other);
    MagicBridge& operator=(const MagicBridge& other);
    ~MagicBridge();

public:
static uintptr_t teleport(Citizen* ptr);
static Citizen* rematerialize(uintptr_t raw);

};

#endif