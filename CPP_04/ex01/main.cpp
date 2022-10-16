#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	Animal	*animals[10];
	Brain	*brain;

	for (int i = 0 ; i < 10; i++) {
		i < 5 ? animals[i] = new Dog() : animals[i] = new Cat();
		std :: cout << "Number " << i + 1 << " is " <<  animals[i]->getType() << std :: endl;
	}
	std :: cout << "Now we carefully rip out the brains out of our Animan No.6, which is a Cat \nAnd we will place a couple of ideas in his bright head" << std :: endl;
	brain = dynamic_cast<Cat *>(animals[6])->getBrain();
	brain->ideas[0] = "Try";
	brain->ideas[1] = "Catch";
	brain->ideas[2] = "SegError";
	brain->ideas[3] = "SEH";
	brain->ideas[4] = "Code in Python";
	std :: cout << "Ideas to share: " << std :: endl;
	for (int i = 0; i < 5; i++)
		std :: cout << brain->ideas[i] << std :: endl;
	std :: cout << "Idea of No.6 is to " << dynamic_cast<Cat *>(animals[6])->getBrain()->ideas[4] << std :: endl;
	*dynamic_cast<Cat *>(animals[7]) = *dynamic_cast<Cat *>(animals[6]);
	std :: cout << "Now No.7 is a copyСat of No.6 and his idea is " << dynamic_cast<Cat *>(animals[7])->getBrain()->ideas[4] << std :: endl;
	std :: cout << "And finally our patiens No.10, he is, how do i say this \'special\'" << std :: endl;
	std :: cout << "this if his thoughts -> \""<<dynamic_cast<Cat *>(animals[9])->getBrain()->ideas[0] << "\" As you can see, his brain is not burdened with such concepts as thoughts or ideas." << std :: endl;
	
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return 0;
}
