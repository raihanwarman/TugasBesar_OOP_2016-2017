#include "Peacock.h"
#include <iostream>
#include <stdlib.h>

Peacock::Peacock() {
	jenis = 0; 			// Herbivore
	kelas = 1;			// Aves
	isJinak = 0;
	point = Point();
	nama = "P"; 		// Stands for Peacock
	habitat = "L";		// Stands for Land
	porsiMakan = 4;
}

Peacock::Peacock(bool _isJinak, Point _point) {
	jenis = 0;
	kelas = 1;
	isJinak = _isJinak;
	point = _point;
	nama = "P";
	habitat = "L";
	porsiMakan = 4;
}

void Peacock::interact() {
	int randAct = rand() % 2;
	switch(randAct) {
		case 1 :
			std::cout << "The peacock sit still" << std::endl;
			break;
		case 2 :
			std::cout << "The peacock spreading its magnificent tail" << std::endl;
	}
}
