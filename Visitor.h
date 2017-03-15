#ifndef VISITOR_H
#define VISITOR_H

#include <string>
#include "Point.h"
using namespace std;

class Visitor{
public:
	Visitor(string name,Point position);

	bool IsValidPath(Point positon);
	bool Moved(Point newPosition);
	string GetName();
	Point GetPosition();
	
	void SetPosition(Point newPosition);

private:
	const string name;
	Point position; //Point posisi visitor
};
#endif