#pragma once
#include<iostream>
#include<string>
#include "Pet.h"
using namespace std;
class Cat:public Pet
{
public:
	int age;
	Cat();
	Cat(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void print() {
		cout << name << " " << age << endl;
	}
};

