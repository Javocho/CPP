/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:11:48 by javocho           #+#    #+#             */
/*   Updated: 2024/09/07 20:39:51 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {

const Animal* j = new Dog();
const Animal* i = new Cat();

delete j;
delete i;

const Animal* a[100];

for (int i = 0; i < 50; i++)
    a[i] = new Dog();
for (int i = 50; i < 100; i++)
    a[i] = new Cat();

for (int i = 0; i < 100; i++)
    delete a[i];

return 0;

}