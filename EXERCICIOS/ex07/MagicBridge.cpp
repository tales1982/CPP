/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MagicBridge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:42:41 by tlima-de          #+#    #+#             */
/*   Updated: 2025/05/14 11:42:23 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MagicBridge.hpp"
#include "Citizen.hpp"


MagicBridge::MagicBridge(/* args */) {};

MagicBridge::MagicBridge(const MagicBridge &other) { (void)other; };

MagicBridge &MagicBridge::operator=(const MagicBridge &other)
{
    if (this != &other)
    {
    }
    return *this;
};

MagicBridge::~MagicBridge() {};

uintptr_t MagicBridge::teleport(Citizen* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
};

Citizen* MagicBridge::rematerialize(uintptr_t raw)
{
    return reinterpret_cast<Citizen*>(raw);
};