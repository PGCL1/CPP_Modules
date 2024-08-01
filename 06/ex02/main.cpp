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
#include <exception>
#include <bsd/stdlib.h>

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base* generate(void)
{
    Base* types[] = {new A, new B, new C};
    const char types_args[] = {'A', 'B', 'C'};
    int rand = arc4random_uniform(3);
    std::cout << "rand = " << rand << " | type = " << types_args[rand] << std::endl;
    for (int i = 0; i < 3; i += 1)
    {
        if (rand != i)
            delete types[i];
    }
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
    try
    {
        A& one = dynamic_cast<A &>(p);
        std::cout << "YOU KNOW WHO IT ISSSSSS, it's A's REF: " << &one << std::endl;
    }
    catch (std::exception &err){}

    try
    {
        B& two = dynamic_cast<B &>(p);
        std::cout << "YOU KNOW WHO IT ISSSSSS, it's B's REF: " << &two << std::endl;
    }
    catch (std::exception &err){}
    
    try
    {
        C& three = dynamic_cast<C &>(p);
        std::cout << "YOU KNOW WHO IT ISSSSSS, it's C's REF: " << &three << std::endl;
    }
    catch (std::exception &err){}
}
 

int main()
{
    Base *test = generate();
    identify(test);
    identify(*test);
    delete test;
    std::cout << std::endl;

    test = generate();
    identify(test);
    identify(*test);
    delete test;
    return 0;
}
