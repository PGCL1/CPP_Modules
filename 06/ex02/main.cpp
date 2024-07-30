/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:46:53 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/24 16:46:53 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include <typeinfo>
#include <assert.h>
#include <stdlib.h>

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void)
{
    Base* types[] = {new A, new B, new C};
    int rand = arc4random_uniform(3);
    std::cout << rand << std::endl;
    return (types[rand]);
}
    

void identify(Base* p)
{
    A *one = dynamic_cast<A *>(p);
    B *two = dynamic_cast<B *>(p);
    C *three = dynamic_cast<C *>(p);
    if (one)
        std::cout << "YEAAAAAAA BOIIIIIIIIIIIIIIIIII, it's A" << std::endl;
    else if (two)
        std::cout << "YEAAAAAAA BOIIIIIIIIIIIIIIIIII, it's B" << std::endl;
    else if (three)
        std::cout << "YEAAAAAAA BOIIIIIIIIIIIIIIIIII, it's C" << std::endl;
}

void identify(Base& p)
{
    A &test = dynamic_cast<A &>(p);
    std::cout << "this is a test: " << &test << std::endl;
    /*
    B &two = dynamic_cast<B &>(p);
    C &three = dynamic_cast<C &>(p);
    if (test)
        std::cout << "YEAAAAAAA BOIIIIIIIIIIIIIIIIII, it's A" << std::endl;
    else if (two)
        std::cout << "YEAAAAAAA BOIIIIIIIIIIIIIIIIII, it's B" << std::endl;
    else if (three)
        std::cout << "YEAAAAAAA BOIIIIIIIIIIIIIIIIII, it's C" << std::endl;
    */
}

int main()
{
      Base *test = generate();
      std::cout << (test == 0 ? "Failed: pointer is NULL" : "Sucess: pointer is not null | ") << test << std::endl; 
      identify(test);
      std::cout << "test is: " << typeid(test).name() << std::endl;
      std::cout << "*test is: " << typeid(*test).name() << std::endl;

      test = generate();
      std::cout << (test == 0 ? "Failed: pointer is NULL" : "Sucess: pointer is not null | ") << test << std::endl; 
      identify(test);
      std::cout << "test is: " << typeid(test).name() << std::endl;
      std::cout << "*test is: " << typeid(*test).name() << std::endl;
      return 0;
}
