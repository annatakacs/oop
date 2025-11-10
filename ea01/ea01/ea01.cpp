// ea01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "Struct.h"
#include "Messages.h"
#include "Person.h"
using namespace std;


//int main() //main for Struct.h
//{
//    Rectangle r = Rectangle(5, 6);
//    r.printRect();
//    double area = r.getArea();
//    std::cout << "area: " << area << std::endl;
//
//    double perim = r.getPerimeter();
//    std::cout << "perimeter: " << perim << std::endl;
//
//    Rectangle q = Rectangle(5, 6);
//    return 0;
//}


//int main() { //main for Messages.h
//    Messages m;
//    m.print();
//
//    Messages a("Hello World!");
//    a.print();
//
//    a.setMessage("Updated message!");
//    a.print();
//
//    return 0;
//}

int main() {  //main for Person.h

	Person anna;
	anna.print();
	anna.setName("Anna");
	anna.setAge(29);

	anna.print();

	Person judit = Person("Judit", 36);
	judit.print();

	return 0;
}