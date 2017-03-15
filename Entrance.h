#ifndef ENTRANCE_H
#define ENTRANCE_H
#include <iostream>
#include <string>
#include "Road.h"

class Entrance:public Road{
	public:
		Entrance(Point _p):Road(_p){ Renderable::s = "#" ;}
};
#endif
