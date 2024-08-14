/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:52:20 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/14 15:05:39 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try 
    {
        std::vector<int>arr(4);
        arr[0] = 3;
        arr[1] = 13;
        arr[2] = 23;
        arr[3] = 33;

        easyfind(arr, 133);
    }
    catch(const std::exception& err)
    {
        std::cout << "Error: " << err.what() << std::endl;
    }
    return 0;
}
