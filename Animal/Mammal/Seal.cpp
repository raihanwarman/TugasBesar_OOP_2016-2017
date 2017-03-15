#include "Seal.h"
#include <iostream>

Seal::Seal() {
	jenis = 1; 			// Carnivore
	kelas = 2;			// Mammal
	isJinak = 0;
	point = Point();
	nama = "S"; 		// Stands for Seal
	habitat = "LW"; 		// Stands for Land & Water
	porsiMakan = 10;
}

Seal::Seal(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 2;
	isJinak = _isJinak;
	point = _point;
	nama = "S";
	habitat = "LW";
	porsiMakan = 10;
}

void Seal::interact() {
	std::cout << "The seal is clapping waiting for you to feed him." << std::endl;
}
