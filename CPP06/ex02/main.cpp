#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}

void testIdentification(Base* basePtr) {
    std::cout << "Identifying with pointer: ";
    identify(basePtr);

    std::cout << "Identifying with reference: ";
    identify(*basePtr);

    std::cout << "----------------------------------------" << std::endl;
}

int main() {
    std::srand(std::time(0));

    // 🔹 Prueba con instancias generadas aleatoriamente
    std::cout << "🔹 TEST: Instancias aleatorias generadas por generate() 🔹" << std::endl;
    for (int i = 0; i < 5; i++) {
        Base* base = generate();
        testIdentification(base);
        delete base;
    }

    // 🔹 Prueba con instancias explícitas
    std::cout << "🔹 TEST: Instancias explícitas de A, B y C 🔹" << std::endl;
    A a;
    B b;
    C c;

    testIdentification(&a);
    testIdentification(&b);
    testIdentification(&c);

    // 🔹 Prueba con referencias
    std::cout << "🔹 TEST: Paso por referencia 🔹" << std::endl;
    Base& refA = a;
    Base& refB = b;
    Base& refC = c;

    identify(refA);
    identify(refB);
    identify(refC);

    // 🔹 Prueba con puntero NULL
    std::cout << "🔹 TEST: Puntero NULL 🔹" << std::endl;
    testIdentification(NULL);

    return 0;
}
