/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotFighter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:09:48 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 22:59:24 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotFighter.hpp"

RobotFighter::RobotFighter(std::string name) : _name(name), _health(100), _energy(100), _damage(10) {}

RobotFighter::~RobotFighter()
{
    std::cout << "RobotFighter " << _name << " has been decommissioned." << std::endl;
}

void RobotFighter::attack(RobotFighter &target)
{
    if (this->_energy >= 5)
    {
        this->_energy -= 5; // Consome energia para o ataque
        target.takeDamage(this->_damage); // Causa dano ao alvo
        std::cout << "RobotFighter " << this->_name << " attacks " << target.getName() << ", dealing " << this->_damage << " damage!" << std::endl;
    }
    else
    {
        std::cout << "RobotFighter " << this->_name << " doesn't have enough energy to attack!" << std::endl;
    }
}

void RobotFighter::takeDamage(int amount)
{
    if (this->_health > 0)
    {
        this->_health -= amount;
        if (this->_health <= 0)
        {
            this->_health = 0; // Evita valores negativos
            std::cout << "RobotFighter " << this->_name << " has been destroyed!" << std::endl;
        }
    }
    else
    {
        std::cout << "RobotFighter " << this->_name << " is already destroyed!" << std::endl;
    }
}

void RobotFighter::repair(int amount)
{
    if (this->_energy < 10)
    {
        std::cout << "RobotFighter " << this->_name << " doesn't have enough energy to repair itself." << std::endl;
    }
    else
    {
        this->_health += amount;
        if (this->_health > 100) // Limita a saúde máxima
        {
            this->_health = 100;
        }
        this->_energy -= 10;
        std::cout << "RobotFighter " << this->_name << " repaired itself, restoring " << amount << " health!" << std::endl;
    }
}

std::string RobotFighter::getName() const
{
    return _name;
}

void RobotFighter::getStatus() const
{
    std::cout << "RobotFighter " << this->_name << " | Health: " << this->_health << " | Energy: " << this->_energy << std::endl;
}
