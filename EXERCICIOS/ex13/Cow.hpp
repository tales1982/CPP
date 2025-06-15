/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cow.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:25:25 by tales             #+#    #+#             */
/*   Updated: 2025/06/15 15:13:58 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cow : public Animal
{
private:
    /* data */
public:
    Cow(const std::string& name);
    virtual ~Cow();

    virtual void makeSound()const;
};

