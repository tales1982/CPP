/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SalesScore.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:57:55 by tales             #+#    #+#             */
/*   Updated: 2024/11/15 17:13:14 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/SalesScore.hpp"

// Construtor padrão
SalesScore::SalesScore() : storeTitle("Unnamed Store") {}

// Destrutor
SalesScore::~SalesScore() {}

// Define o nome da loja
void SalesScore::setStoreTitle(const std::string& storeTitle)
{
    this->storeTitle = storeTitle;
}

// Retorna o nome da loja
std::string SalesScore::getStoreTitle() const
{
    return storeTitle;
}

// Inicializa o sistema de vendas
void SalesScore::bootSystem(const std::string& storeTitle)
{
    std::cout << "Welcome to " << storeTitle << " sales system" << std::endl;
}
