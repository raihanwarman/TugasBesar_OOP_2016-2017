#ifndef EXIT_H
#define EXIT_H
#include <iostream>
#include <string>
#include "Road.h"

class Exit:public Road{
	public:
		Exit(Point _p):Road(_p){ Renderable::s = "*" ;}
};
#endif
