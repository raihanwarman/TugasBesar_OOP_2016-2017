#ifndef WATERHABITAT_H
#define WATERHABITAT_H

#include <iostream>
#include <string>
#include "Habitat.h"

using namespace std;

class WaterHabitat:public Habitat{
	public:
		WaterHabitat(Point _p):Habitat(_p){ Renderable::s = "w" ;}
};
#endif
