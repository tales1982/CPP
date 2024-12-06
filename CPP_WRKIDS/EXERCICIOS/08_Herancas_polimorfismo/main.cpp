/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:10:19 by tales             #+#    #+#             */
/*   Updated: 2024/12/06 22:55:28 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotFighter.hpp"

int main()
{
    RobotFighter robo_A("Theo");
    RobotFighter robo_B("Thomas");

    // Exibe o status inicial
    robo_A.getStatus();
    robo_B.getStatus();

    // Robo_A ataca Robo_B
    robo_A.attack(robo_B);

    // Exibe o status após o ataque
    robo_A.getStatus();
    robo_B.getStatus();

    // Robo_B tenta atacar Robo_A, mas sem energia suficiente
    robo_B.attack(robo_A);

    return 0;
}
