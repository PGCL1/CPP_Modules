/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:07:12 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/21 20:10:06 by glacroix         ###   ########.fr       */
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
        void setGradeSign(int grade);
        void setGradeExec(int grade);
        void setName(std::string str);

        std::string getName() const;
        bool getSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;
        void incrementGrade();
        void decrementGrade();
        class GradeTooHighException : public std::exception {
            const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception {
            const char *what(void) const throw();
        };
        void beSigned(Bureaucrat& b);

        AForm();
        AForm(const AForm& copy);
        AForm& operator=(const AForm& copy);
        virtual ~AForm();
};

std::ostream& operator <<(std::ostream& output, const AForm& _f);

#endif
