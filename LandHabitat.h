#ifndef LANDHABITAT_H
#define LANDHABITAT_H

#include <iostream>
#include <string>
#include "Habitat.h"

using namespace std;

class LandHabitat:public Habitat{
	public:
		LandHabitat(Point _p):Habitat(_p){ Renderable::s = "l" ;}
};
#endif
