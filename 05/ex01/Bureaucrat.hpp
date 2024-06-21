/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:31:47 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/21 16:58:33 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Form;

class Bureaucrat  
{
    private:
        const std::string m_name;
        int m_grade;

    public:
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form& form) const;
        class GradeTooHighException : public std::exception {
            const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception {
            const char *what(void) const throw();
        };

        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& copy);
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &output, const Bureaucrat& _b);

#endif
