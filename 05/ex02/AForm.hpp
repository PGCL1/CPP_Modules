/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:07:12 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/27 19:11:23 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class AForm {
    private:
        const std::string   m_name;
        bool                m_isSigned;
        const int           m_gradeSign;
        const int           m_gradeExec;

    public:
        std::string getName() const;
        bool getSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;
        class GradeTooHighException : public std::exception {
            const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception {
            const char *what(void) const throw();
        };
        void beSigned(Bureaucrat& b);
        virtual void execute(Bureaucrat const& executor) const = 0;

        AForm();
        AForm(const std::string name, const int gradeSign, const int gradeExec);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& copy);
        virtual ~AForm();
};

std::ostream& operator <<(std::ostream& output, const AForm& _f);

#endif
