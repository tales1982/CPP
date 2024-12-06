/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotFighter.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:10:05 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 23:02:10 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTFIGHTER_HPP
#define ROBOTFIGHTER_HPP

#include<iostream>
#include<string>

class RobotFighter
{
private:
    std::string _name;
    int _health;
    int _energy;
    int _damage;
    
public:
    RobotFighter(std::string name);
    ~RobotFighter();
    void attack(RobotFighter &target);
    void takeDamage(int amount);
    void repair(int amount);
    std::string getName() const;
    void getStatus() const;

};

#endif