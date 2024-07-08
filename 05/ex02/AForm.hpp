/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:07:12 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/02 19:27:50 by glacroix         ###   ########.fr       */
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
        virtual void action() const = 0;
        virtual void execute(Bureaucrat const& executor) const = 0;

        AForm();
        AForm(std::string name);
        AForm(const std::string name_example, const int gradeSign_example, const int gradeExec_example);
        AForm(const AForm& example);
        AForm& operator=(const AForm& example);
        virtual ~AForm();
};

std::ostream& operator <<(std::ostream& output, const AForm& f);

#endif
