#include "Person.h"
#include <iostream>
#include <cstring>
using namespace std;

Person::Person() {
	age = 0;
	name = new char('\0');
}

Person::Person(const char* s, int n) {
	age = n;
	name = new char[strlen(s) + 1];
	strcpy_s(name, (strlen(s) + 1), s);
}

Person::~Person() {
	delete[] name;
}

void Person::setName(const char* s) {
	delete[] name;
	name = new char[strlen(s) + 1];
	strcpy_s(name, (strlen(s) + 1), s);
}

void Person::setAge(int t) {
	age = t;
}

void Person::print() const {
	cout << "age: " << age << endl;
	cout << "name: " << name << endl;
}