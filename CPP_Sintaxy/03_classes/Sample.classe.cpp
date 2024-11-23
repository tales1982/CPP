/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.classe.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:33:04 by tales             #+#    #+#             */
/*   Updated: 2024/11/06 09:53:48 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.classe.hpp"

Sample::Sample(void) {
    std::cout << "Constructor called" << std::endl;

    this->foo = 42;
    std::cout << "this->foo: " << this->foo << std::endl;
    this->bar();
    return;
}

Sample::~Sample(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar(void) const {
    std::cout << "Member function bar called" << std::endl;
    return;
}