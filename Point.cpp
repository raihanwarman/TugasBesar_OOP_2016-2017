#include "Point.h"
#include <iostream>
#include <string>

using namespace std;

Point::Point(){
	this->x = 0;
	this->y = 0;
}
Point::Point(int x, int y){
	this->x = x;
	this->y = y;
}
Point::Point(const Point& Point){
	this->x = Point.x;
	this->y = Point.y;
}
Point& Point::operator=(const Point& point){
	this->x = point.x;
	this->y = point.y;
	return *this;
}

int Point::GetX() const {
	return x;
}
int Point::GetY() const{
	return y;
}
bool Point::IsSamePoint(Point p){
	return(this->x == p.x && this->y == p.y);
}
Point Point::GetUp(){
	Point p;
	p.SetX(this->x);
	p.SetY(this->y-1);
	return p;
}
Point Point::GetDown(){
	Point p;
	p.SetX(this->x);
	p.SetY(this->y+1);
	return p;
}
Point Point::GetLeft(){
	Point p;
	p.SetX(this->x-1);
	p.SetY(this->y);
	return p;
}
Point Point::GetRight(){
	Point p;
	p.SetX(this->x+1);
	p.SetY(this->y);
	return p;
}
void Point::SetX(int newX){
	x = newX;
}
void Point::SetY(int newY){
	y = newY;
}
void Point::Print(){
	cout<<"("<<x<<","<<y<<") ";
}
