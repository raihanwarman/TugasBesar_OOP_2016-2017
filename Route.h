#ifndef ROUTE_H
#define ROUTE_H

#include <vector>

#include "Renderable.h"
#include "Road.h"
#include "Entrance.h"
#include "Exit.h"

using namespace std;

class Route:public Renderable{
public:
	// Entrance en;
	// Exit ex;
	Route(){}
	vector<Cell *> roads;
};
#endif
