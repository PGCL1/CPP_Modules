/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+      +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:51:59 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/02 19:51:59 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {

    public:
        AForm* makeForm(const std::string formType, const std::string target);

        Intern();
        Intern(const Intern& example);
        Intern& operator=(const Intern& example);
        ~Intern();
};

#endif
