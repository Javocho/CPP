/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:11:48 by javocho           #+#    #+#             */
/*   Updated: 2024/09/08 17:00:59 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* w = new WrongCat();
    const WrongCat *wc = new WrongCat();
    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << w->getType() << std::endl;
    std::cout << wc->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    w->makeSound();
    wc->makeSound();

    delete meta;
    delete i;
    delete j;
    delete w;
    delete wc;
    
    return 0;
}