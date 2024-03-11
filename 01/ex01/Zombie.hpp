/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:52:19 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/11 18:20:45 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <memory>

class Zombie {
	std::string name;

	public:
	void announce(void);
	void nameZombie(std::string name);

	//no fucking idea why
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde(int N, std::string name);

#endif


/*
#include<iostream>

using namespace std;

class MyClass
{
	public:
	void method(int i){
		cout<<"object "<<i+1<<endl;}
	};

int main(){

MyClass *array_of_objects= new MyClass[5]; // Creating an array of MyClass objects using 'new'

for(int i=0; i<5; i++){

array_of_objects[i].method(i);}

delete[] array_of_objects;

}*/