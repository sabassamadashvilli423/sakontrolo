#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include<vector>
using namespace std;
int main()
{
	Dog d(true, "dog");
	d.print();
	Cat c("cat", 2);
	c.print();
	Parrot p("male", "parrot");
	p.print();
}

