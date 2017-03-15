#include "Owl.h"
#include <iostream>

Owl::Owl() {
	jenis = 1; 			// Carnivore
	kelas = 1;			// Aves
	isJinak = 0;
	point = Point();
	nama = "!"; 		// Stands for Owl
	habitat = "AL";		// Stands for Air and Land
	porsiMakan = 4;
}

Owl::Owl(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 1;
	isJinak = _isJinak;
	point = _point;
	nama = "!";
	habitat = "AL";
	porsiMakan = 4;
}

void Owl::interact() {
	std::cout << "The Owl is hooting while staring at you." << std::endl;
}
