#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	std :: cout << "---RIGHT OUTPUT---" << std :: endl;
	{
		Animal* meta = new Animal();
		Animal* j = new Dog();
		Animal* i = new Cat();


		std::cout << j->getType() << std::endl;
		j->makeSound();
		delete j;
		std::cout << i->getType() << std::endl;
		i->makeSound();
		delete i;
		meta->makeSound();
		delete meta;
	}
	std :: cout << "---Something interesting---" << std :: endl;
	{
		Animal *bptr;

    	Cat d;
    	bptr = &d;

		// Non-virtual function, binded at compile timev
		bptr->getType();
		// Virtual function, binded at runtime
		bptr->makeSound();
		Dog c;
    	bptr = &c;

		// Non-virtual function, binded at compile timev
		bptr->getType();
		// Virtual function, binded at runtime
		bptr->makeSound();
  
	}
	std :: cout << "---Assingation test---" << std :: endl;
	{
		Cat d;
		Dog c;
		Cat anotherCat;
		Cat *yetAnotherCat;
		Dog anotherDog;

		yetAnotherCat = &d;
		anotherCat = d;
		anotherDog = c;
	}
	std :: cout << "---WRONG OUTPUT---" << std :: endl;
	{
		WrongAnimal	*smth = new WrongAnimal();
		WrongAnimal *cat = new WrongCat();
		WrongCat	*anotherCat = new WrongCat();
		
		std :: cout << smth->getType() << std :: endl;
		smth->makeSound();
		std :: cout << cat->getType() << std :: endl;
		cat->makeSound();
		std :: cout << anotherCat->getType() << std :: endl;
		anotherCat->makeSound();
		delete cat;
		delete smth;
	}
	return (0);
}