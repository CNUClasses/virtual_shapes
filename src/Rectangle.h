/*
 * Rectangle.h
 *
 *  Created on: Dec 3, 2020
 *      Author: keith
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include<string>
#include "Shape.h"

class Rectangle: public Shape {
public:
	Rectangle();
	virtual ~Rectangle();
	std::string whatami();
};

#endif /* RECTANGLE_H_ */
