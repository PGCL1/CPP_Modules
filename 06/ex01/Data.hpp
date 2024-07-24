/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:03:21 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/24 10:03:21 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data
{
    private:
        std::string m_magicWords;
        bool m_wish;
        int m_luckyNum;
    public:
        std::string getMagicWords() const;
        bool getWish() const;
        int getLuckyNum() const;

        Data();
        Data(std::string magicWords_example, bool wish_example, int luckyNum_example);
        Data(const Data& example);
        Data& operator=(const Data& example); 
        ~Data();
};

#endif
