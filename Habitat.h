#ifndef HABITAT_H
#define HABITAT_H

#include <iostream>
#include <string>
#include "Cell.h"

using namespace std;

class Habitat:public Cell{
	public:
		Habitat(){Renderable::s = "H";}
		Habitat(Point _p):Cell(_p){ Renderable::s = "H" ;}
		bool operator==(const Habitat & obj2) const
		{
				if( (p.GetX()==obj2.p.GetX() ) &&
							(p.GetY() == obj2.p.GetY()))
					return true;
				else
					return false;
		}
};
#endif
