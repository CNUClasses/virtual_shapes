//============================================================================
// Name        : virtual_shapes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
	Shape s;
	Circle c;
	Rectangle r;

	cout<<s.whatami()<<endl;
	cout<<c.whatami()<<endl;
	cout<<r.whatami()<<endl;

	//now lets use a base class pointer to
	//manip derived classes
	Shape*p=&s;
	cout<<p->whatami()<<endl;

	p=&c;
	cout<<p->whatami()<<endl;

	p=&r;
	cout<<p->whatami()<<endl;

	return 0;
}
