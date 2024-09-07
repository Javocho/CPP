/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:11:48 by javocho           #+#    #+#             */
/*   Updated: 2024/09/07 20:57:19 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>
#include <cstdlib> // for system("leaks")

int main() {
    // Test 1: Abstract class (Cannot instantiate Animal directly)
    // This line should fail to compile if Animal is abstract.
    // const Animal* test = new Animal();  // Uncomment this to check if it's abstract

    // Test 2: Polymorphism
    std::cout << "\n--- Testing Polymorphism ---" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "Dog Type: " << j->getType() << std::endl;  // Should print "Dog"
    std::cout << "Cat Type: " << i->getType() << std::endl;  // Should print "Cat"

    j->makeSound();  // Should print Dog's sound ("Woof" or "Bark!")
    i->makeSound();  // Should print Cat's sound ("Meow" or custom sound)

    // Test 3: Destructor order
    std::cout << "\n--- Testing Destructor Order ---" << std::endl;
    delete j;  // Should print "Dog destroyed" followed by "Animal destroyed"
    delete i;  // Should print "Cat destroyed" followed by "Animal destroyed"

    // Test 4: Array of Animals (polymorphic deletion)
    std::cout << "\n--- Testing Array of Animals ---" << std::endl;
    Animal* animals[4];
    for (int k = 0; k < 2; ++k)
        animals[k] = new Dog();
    for (int k = 2; k < 4; ++k)
        animals[k] = new Cat();

    // Delete animals array to test if destructors are called properly
    for (int k = 0; k < 4; ++k)
        delete animals[k];  // Correct destructor order should be called

    // Test 5: Memory leaks check (optional, if you're using macOS)
    // system("leaks animals");  // This line is useful to check for leaks on macOS

    return 0;
}
