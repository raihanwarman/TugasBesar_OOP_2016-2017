#include "Moose.h"
#include <iostream>

Moose::Moose() {
	jenis = 0; 			// Herbivore
	kelas = 2;			// Mammal
	isJinak = 0;
	point = Point();
	nama = "MS"; 		// Stands for Moose
	habitat = "L"; 		// Stands for Land
	porsiMakan = 3;
}

Moose::Moose(bool _isJinak, Point _point) {
	jenis = 0;
	kelas = 2;
	isJinak = _isJinak;
	point = _point;
	nama = "MS";
	habitat = "L";
	porsiMakan = 3;
}

void Moose::interact() {
	std::cout << "The moose notice you and running away from you." << std::endl;
}
