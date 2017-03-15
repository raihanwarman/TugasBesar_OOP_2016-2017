#include "Turkey.h"
#include <iostream>

Turkey::Turkey() {
	jenis = 0; 			// Herbivore
	kelas = 1;			// Aves
	isJinak = 0;
	point = Point();
	nama = "TK"; 		// Stands for Turkey
	habitat = "AL";		// Stands for Air and Land
	porsiMakan = 5;
}

Turkey::Turkey(bool _isJinak, Point _point) {
	jenis = 0;
	kelas = 1;
	isJinak = _isJinak;
	point = _point;
	nama = "TK";
	habitat = "AL";
	porsiMakan = 5;
}

void Turkey::interact() {
	std::cout << "The turkey is fleeing upon seeing you got closer." << std::endl;
}
