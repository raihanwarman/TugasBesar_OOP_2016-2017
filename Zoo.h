#ifndef ZOO_H
#define ZOO_H

#include <map>
#include <utility>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <cmath>
#include <cstdlib>
// #include <stdlib.h>

#include "Animal/Animal.h"
#include "Animal/Aves/AvesHeader.h"
#include "Animal/Mammal/MammalHeader.h"
#include "Animal/Reptile/ReptileHeader.h"

#include "Renderable.h"
#include "Cell.h"
#include "AirHabitat.h"
#include "Facility.h"
#include "Habitat.h"
#include "LandHabitat.h"
#include "Park.h"
#include "Point.h"

#include "Road.h"
#include "Restaurant.h"
#include "WaterHabitat.h"
#include "Cage.h"
#include "Entrance.h"
#include "Exit.h"
#include "Route.h"

using namespace std;

class Zoo{
public:
	Zoo(int width, int height);
    Zoo(char *fileName);

	bool IsValidPoint(Point p);
	int GetWidth();
	int GetHeight();

	Cell *GetCellAtPoint(Point p);
	Cell *GetUpCell(Point p);
	Cell *GetDownCell(Point p);
	Cell *GetRightCell(Point p);
	Cell *GetLeftCell(Point p);

	void Group(Cell *cell, int id );
	void Group();

	void InsertCell(Point p, Cell * c);
	void RenderZoo();
	void RenderZooAt(Point p);
	void AddToGroup(Cell *centerCell, Cell * addCell, int id);
	void RenderCages();

	/**
	* Adding animal manually.
	* @see animalOption()
	*/
	void addAnimal();

	/**
	* Adding animal from text file. If there is animal that not fit the condition
	* to be added, the animal will not be included in the zoo.
	* @param fileName The name of the text file which contained animal list.
	*/
	void addAnimal(char *fileName);

	/**
	* Provide option for adding animal manually.
	*/
	void animalOption();

	/**
	* Checking whether the cage is full or not.
	* @return true, if the number of animal in the cage <= 30% of the cage size. else otherwise.
	*/
	bool isCageFull();
	void PrintRoad();
	void CountElmt();
	int getSumA();
	int getSumL();
	int getSumW();
	void createAnimal();
	void printAnimal();
	bool isThereAnimal(Point P);
	string SearchAnimal(Point P); //return string dari Animal
	Animal* getAnimal(Point P); //return Animal di Point P
	void moveAnimal();
	string getStringPoint(Point P); //return kode pada point i, j
	void renderAll();
	void copyAll();

private:
	int width, height, sumA, sumL, sumW;
	map<Point, Cell*> pointOfCell;
	map<Point, Cell*> keluaran;
	vector<Cell *> partOfGroup;
	vector <vector<Cell *> > groups;// rename cages into groups
	vector<Cage *> cages; // this is the real cages
	vector<Route *>routes;
	vector<Animal *> binatang;
	map<Point, string> output;
};
#endif
