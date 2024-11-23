/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:30:35 by tales             #+#    #+#             */
/*   Updated: 2024/11/05 17:34:50 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// En C++, les namespaces (ou "espaces de noms") sont utilisés pour organiser le code 
// et éviter les conflits de noms entre les variables, les fonctions et les classes. 
// Les namespaces sont particulièrement utiles dans les grands projets, où différentes 
// parties du code peuvent avoir des noms similaires.
// Un exemple classique serait lorsque deux développeurs créent des fonctions avec le même nom,
// mais pour des objectifs différents. En utilisant les namespaces, il est possible "d'encapsuler" 
// ces fonctions dans différents espaces de noms, ce qui évite les conflits.
// Exemple d'utilisation des namespaces en C++

#include <stdio.h>

int variable_globale = 10;
int fonction_globale() {
    return 20;
}

namespace espace1 {
    int variable_locale = 30;
    int fonction_locale() {
        return 40;
    }
}

namespace espace2 {
    int variable_locale = 50;
    int fonction_locale() {
        return 60;
    }
}

int main() {
    printf("variable_globale = %d\n", variable_globale);
    printf("fonction_globale() = %d\n", fonction_globale());

    printf("espace1::variable_locale = %d\n", espace1::variable_locale);
    printf("espace1::fonction_locale() = %d\n", espace1::fonction_locale());

    printf("espace2::variable_locale = %d\n", espace2::variable_locale);
    printf("espace2::fonction_locale() = %d\n", espace2::fonction_locale());

    return 0;
}