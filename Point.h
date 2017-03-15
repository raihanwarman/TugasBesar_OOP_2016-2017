#ifndef POINT_H
#define POINT_H
#include "Renderable.h"

class Point:public Renderable{
public:
	Point();
	Point(int x,int y);
	Point(const Point& Point);
	Point& operator=(const Point& point);

	int GetX() const;
	int GetY() const;
	bool operator <(const Point& rhs) const
    {
      return (( x < rhs.x ) || (( x == rhs.x) && ( y < rhs.y )));
    }
    bool IsSamePoint(Point p);
	Point GetUp();
	Point GetDown();
	Point GetLeft();
	Point GetRight();


	void SetX(int newX);
	void SetY(int newY);
	void Print();

private:
	int x,y;
};
#endif
