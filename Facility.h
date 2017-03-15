#ifndef FACILITY_H
#define FACILITY_H

#include <iostream>
#include <string>
#include "Cell.h"

using namespace std;

class Facility:public Cell{
	public:
		Facility(Point _p):Cell(_p){ Renderable::s = "F" ;}
};
#endif
