#ifndef CAGE_H
#define CAGE_H

#include <vector>

#include "Renderable.h"
#include "Habitat.h"

using namespace std;

class Cage:public Renderable{
public:
	string name;
	vector<Cell *> habitats;
	Cage(string s){name = s;}
	vector<Cell *> animals;
};
#endif
