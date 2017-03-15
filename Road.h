#ifndef ROAD_H
#define ROAD_H

#include <iostream>
#include <string>
#include "Facility.h"

using namespace std;

class Road:public Facility{
	public:
		Road(Point _p):Facility(_p){ Renderable::s = "+" ;}
		bool operator==(const Road & obj2) const
		{
				if( (p.GetX()==obj2.p.GetX() ) &&
							(p.GetY() == obj2.p.GetY()))
					return true;
				else
					return false;
		}
};
#endif
