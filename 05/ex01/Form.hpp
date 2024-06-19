/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:07:12 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/19 15:22:24 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int gradeSign;
        const int gradeExec;

    public:
        std::string getName() const;
        int getGrade(int _grade) const;
        void incrementGrade();
        void decrementGrade();
        class GradeTooHighException : public std::exception {
            const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception {
            const char *what(void) const throw();
        };

        Form();
        Form(const Form& copy);
        Form& operator=(const Form& copy);
        ~Form();
};

std::ostream& operator <<(std::ostream& output, const Form& _f);

#endif
