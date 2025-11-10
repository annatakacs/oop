#pragma once
#include <string>
using namespace std;

//struct Rectangle {
//	double width;
//	double height;
//};

class Rectangle {
private:
	double width;
	double height;
	static int db; // shared amoung objects;
public:
	Rectangle(double w, double h); // konstruktor
	int getCount();
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	double getPerimeter() const;
	void printRect() const;
	~Rectangle(); // destruktor	
};

//void initRect(Rectangle& r, double w, double h);
//double getArea(const Rectangle& r);
//double getPerimeter(const Rectangle& r);
//void printRect(const Rectangle& r);