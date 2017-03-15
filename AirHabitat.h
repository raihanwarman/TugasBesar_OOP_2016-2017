#ifndef AIRHABITAT_H
#define AIRHABITAT_H

#include <iostream>
#include <string>
#include "Habitat.h"

using namespace std;

class AirHabitat:public Habitat{
	public:
		AirHabitat(Point _p):Habitat(_p){ Renderable::s = "a" ;}
};
#endif
