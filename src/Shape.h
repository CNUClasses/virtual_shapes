/*
 * Shape.h
 *
 *  Created on: Dec 3, 2020
 *      Author: keith
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include<string>

class Shape {
public:
	Shape();
	virtual ~Shape();
	virtual std::string whatami();
};

#endif /* SHAPE_H_ */
