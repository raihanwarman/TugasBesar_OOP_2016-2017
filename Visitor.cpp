#include <string>
#include <iostream>
#include "Visitor.h"

using namespace std;

Visitor::Visitor(string name, Point position):name(name){
	this->position = position;
}
string Visitor::GetName(){
	return name;
}
bool Visitor::IsValidPath(Point position){//perlu syarat path valid
	bool isValid;
	if(position.GetX()>= 0 && position.GetY() >= 0){
		isValid = true;
	}else{
		isValid = false;
	}
	return isValid;
}
bool Visitor::Moved(Point newPosition){
	bool isMoved;
	if(IsValidPath(newPosition)){
		SetPosition(newPosition);
		isMoved = true;
	}
	else{
		isMoved = false;
	}
	return isMoved;
}
Point Visitor::GetPosition(){
	return position;
}
void Visitor::SetPosition(Point newPosition){
	position.SetX(newPosition.GetX());
	position.SetY(newPosition.GetY());
}