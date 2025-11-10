#include <iostream>
#include "Struct.h"

int Rectangle::db = 0; // static params defined in cpp

Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
	db++;
	std::cout << "HELLO: " << db << std::endl;
};

double Rectangle::getWidth() const {
	return width;
};

double Rectangle::getHeight() const {
	return height;
};

double Rectangle::getArea() const {
	return width * height;
};

double Rectangle::getPerimeter() const {
	return (width + height) * 2;
};

void Rectangle::printRect() const {
	std::cout << "width: " << width << std::endl;
	std::cout << "height: " << height << std::endl;
};

Rectangle::~Rectangle() {
	std::cout << "BYE: " << db << std::endl;
	db--;
}

int Rectangle::getCount() {
	return db;
}