/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:30:24 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/11 18:35:57 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The address of str is " << &str << std::endl;
    std::cout << "The address of stringPTR is " << stringPTR << std::endl;
    std::cout << "The address of stringREF is " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "The value of string is " << str << std::endl;
    std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is " << stringREF << std::endl;
    return 0;
}