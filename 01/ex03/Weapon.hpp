/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:41:11 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/11 18:54:57 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>


class Weapon {
  std::string type;
  
  public:
  void setType();
  std::string const& getType();

  Weapon();
  ~Weapon();
};

#endif