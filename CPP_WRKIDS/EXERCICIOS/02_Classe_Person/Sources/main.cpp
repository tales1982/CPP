/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:53:59 by tales             #+#    #+#             */
/*   Updated: 2024/11/23 20:05:12 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/Person.hpp"

int main() {
    // Testando createPerson
    Person* person = createPerson("Tales");
    person->greet();

    // Liberando memória
    delete person;

    // Testando introducePerson
    introducePerson("Maria");

    return 0;
}