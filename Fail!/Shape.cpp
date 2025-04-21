// Fail!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <typeinfo>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
	vector<Shape*> shapes;

	Circle* c = new Circle(1.0f);

	c->SetRadius(3.0f);

	Rectangle* r = new Rectangle(4.0f, 5.0f);

	shapes.push_back(c);
	shapes.push_back(r);

	for (int i = 0; i <= (shapes.size() - 1); i++)
	{
		cout << "Area: " << shapes[i]->Area() << endl;
		// TODO: If shape is a circle, print radius
		if (typeid(*shapes[i]) == typeid(Circle)) {
			cout << "Radius: " << c->GetRadius() << endl;
		}
	}
	// FIXME: Getting memory leak! Delete all shapes.
	shapes.clear();
	return 0;
}

float Shape::Area()
{
	return 0.0f;
}
