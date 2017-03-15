#include "Cockatoo.h"
#include <iostream>

Cockatoo::Cockatoo() {
	jenis = 0; 			// Herbivore
	kelas = 1;			// Aves
	isJinak = 0;
	point = Point();
	nama = "CK"; 		// Stands for Cockatoo
	habitat = "AL";		// Stands for Air and Land
	porsiMakan = 3;
}

Cockatoo::Cockatoo(bool _isJinak, Point _point) {
	jenis = 0;
	kelas = 1;
	isJinak = _isJinak;
	point = _point;
	nama = "CK";
	habitat = "AL";
	porsiMakan = 3;
}

void Cockatoo::interact() {
	std::cout << "The cockatoo is mimicking your speech." << std::endl;
}
