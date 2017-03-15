#ifndef CELL_H
#define CELL_H

#include <iostream>
#include <string>
#include "Point.h"
#include "Renderable.h"

using namespace std;

class Cell:public Renderable{
public:
	Cell(){}
	Cell(Point _p){ Renderable::s = "C" ; p=_p;}
	bool IsSameCell( Cell *c) {
		return(this->s == c->s);
	}
	Point GetLocation(){ return p;}
protected:
	Point p;
};
#endif
