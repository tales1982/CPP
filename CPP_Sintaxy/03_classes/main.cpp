/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:33:59 by tales             #+#    #+#             */
/*   Updated: 2024/11/06 09:52:02 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.classe.hpp"

int     main(void) {
    Sample instance;

    instance.foo = 42;
    std::cout << "instance.foo: " << instance.foo << std::endl;
    instance.bar();
    return (0);
}