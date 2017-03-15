#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include <string>
#include "Facility.h"

using namespace std;

class Restaurant:public Facility{
	public:
		Restaurant(Point _p):Facility(_p){ Renderable::s = "R" ;}
};
#endif
