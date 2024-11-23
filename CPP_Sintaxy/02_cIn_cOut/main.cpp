/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:47:30 by tales             #+#    #+#             */
/*   Updated: 2024/11/05 18:00:53 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
En C++, cin et cout sont utilisés pour l'entrée et la sortie de données.

cout
Sert à afficher des données à l'écran.
Provient de la bibliothèque standard de C++ et se trouve dans le namespace std.
Utilise l'opérateur << pour diriger la sortie vers la console.

cin
Sert à recevoir des données de l'utilisateur.
Provient de la bibliothèque standard de C++ et se trouve dans le namespace std.
Utilise l'opérateur >> pour diriger l'entrée de la console vers une variable.
*/

#include <iostream>

int main() {
    int age;
    std::cout << "Entrez votre âge : ";
    std::cin >> age;
    std::cout << "Vous avez " << age << " ans." << std::endl;
    return 0;
}
// Sortie : Entrez votre âge : Vous avez 20 ans.
