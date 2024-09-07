/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javocho <javocho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:11:48 by javocho           #+#    #+#             */
/*   Updated: 2024/09/07 12:27:04 by javocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* w = new WrongAnimal();
    const WrongCat *wc = new WrongCat();
    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << w->getType() << std::endl;
    std::cout << wc->getType() << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    w->makeSound();
    wc->makeSound();
    return 0;
}