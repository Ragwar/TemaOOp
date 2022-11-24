#include "rectangle.h";

rectangle::rectangle(double x, double y) {
	this->height = x;
	this->lenght = y;
}

	double rectangle::perimeter() {
		return height * 2 + lenght * 2;
	}
	double rectangle::area() {
		return height * lenght;
	}