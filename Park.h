#ifndef PARK_H
#define PARK_H

#include <iostream>
#include <string>
#include "Facility.h"

using namespace std;

class Park:public Facility{
	public:
		Park(Point _p):Facility(_p){ Renderable::s = "P" ;}
};
#endif
