/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:41:11 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/12 16:21:06 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class Weapon {
  std::string type;
  
  public:
  void setType(std::string const &type);
  std::string const& getType();

  Weapon();
  Weapon(std::string type);
  ~Weapon();
};

#endif