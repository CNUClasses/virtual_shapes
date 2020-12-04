/*
 * Circle.h
 *
 *  Created on: Dec 3, 2020
 *      Author: keith
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include<string>
#include "Shape.h"

class Circle: public Shape {
public:
	Circle();
	virtual ~Circle();
	std::string whatami();
};

#endif /* CIRCLE_H_ */
