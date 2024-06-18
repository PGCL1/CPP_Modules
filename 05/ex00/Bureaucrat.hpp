/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:31:47 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/17 17:19:28 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat 
{
    private:
        const std::string name;
        int grade;

    public:
        std::string getName() const;
        int getGrade() const;
        void incrementGrade(int &grade);
        void decrementGrade(int &grade);

        Bureaucrat();
        //implement overload << function
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& copy);
        ~Bureaucrat();
            
};

std::ostream& operator<<(std::ostream &output, const Bureaucrat& _b);

#endif
