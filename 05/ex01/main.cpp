/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:34:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/04 18:56:56 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat b("Vio", 10);
        b.decrementGrade();
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;

        Form form;
        //won't work because the form is not signed
        b.signForm(form);

        form.beSigned(b);
        b.signForm(form);
    }
    catch(std::exception& error)
    {
        std::cout << "Error: " << error.what() << std::endl;
    }
}
