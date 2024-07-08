/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:39:29 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/08 15:58:20 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string m_target;
        const int m_requiredGradeSign;
        const int m_requiredGradeExec;
    public:
        std::string getTarget() const;
        void execute(Bureaucrat const& executor) const;
        int getRequiredGradeSign() const;
        int getRequiredGradeExec() const;
        void action() const;
        
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target_example);
        ShrubberyCreationForm(const ShrubberyCreationForm& example);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& example);
        ~ShrubberyCreationForm();

};

#endif

