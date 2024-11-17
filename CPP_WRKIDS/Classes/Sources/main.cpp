/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:30:30 by tales             #+#    #+#             */
/*   Updated: 2024/11/13 16:30:31 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/SalesScore.hpp"

int main()
{
    SalesScore store1;
    SalesScore store2;

    store1.setStoreTitle("Store 1");
    store2.setStoreTitle("Store 2");

    store1.bootSystem(store1.getStoreTitle());
    store2.bootSystem(store2.getStoreTitle());

    std::cout << "Store titles:" << std::endl;
    std::cout << store1.getStoreTitle() << std::endl;
    std::cout << store2.getStoreTitle() << std::endl;

    return 0;
}
