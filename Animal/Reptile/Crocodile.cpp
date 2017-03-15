#include "Crocodile.h"
#include <iostream>
#include <stdlib.h>

Crocodile::Crocodile() {
	jenis = 1; 			// Carnivore
	kelas = 3;			// Reptile
	isJinak = 0;
	point = Point();
	nama = "CR"; 		// Stands for Crocodile
	habitat = "LW"; 		// Stands for Land & Water
	porsiMakan = 6;
}

Crocodile::Crocodile(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 3;
	isJinak = _isJinak;
	point = _point;
	nama = "CR";
	habitat = "LW";
	porsiMakan = 6;
}

void Crocodile::interact() {
int randAct = rand() % 2;
	switch(randAct) {
		case 1 :
			std::cout << "The crocodile is sunbathing right now." << std::endl;
			break;
		case 2 :
			std::cout << "You can only see the crocodile's head above the water." << std::endl;
	}
}
