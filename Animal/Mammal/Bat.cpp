#include "Bat.h"
#include <iostream>

Bat::Bat() {
	jenis = 0; 			// Herbivore
	kelas = 2;			// Mammal
	isJinak = 0;
	point = Point();
	nama = "B"; 		// Stands for Bat
	habitat = "AL"; 		// Stands for Air & Land
	porsiMakan = 3;
}

Bat::Bat(bool _isJinak, Point _point) {
	jenis = 0;
	kelas = 2;
	isJinak = _isJinak;
	point = _point;
	nama = "B";
	habitat = "AL";
	porsiMakan = 3;
}

void Bat::interact() {
	std::cout << "The bat is hanging in high places, you can only see them." << std::endl;
}
