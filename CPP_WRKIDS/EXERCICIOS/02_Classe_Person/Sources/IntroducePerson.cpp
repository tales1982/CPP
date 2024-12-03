/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntroducePerson.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:53:56 by tales             #+#    #+#             */
/*   Updated: 2024/11/23 20:01:20 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/Person.hpp"

// Cria um objeto Person na pilha e chama o método greet()
void introducePerson(const std::string name) {
    Person person(name);
    person.greet();
}