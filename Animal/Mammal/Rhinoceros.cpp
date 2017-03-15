#include "Rhinoceros.h"
#include <iostream>

Rhinoceros::Rhinoceros() {
	jenis = 0; 			// Herbivore
	kelas = 2;			// Mammal
	isJinak = 0;
	point = Point();
	nama = "RH"; 		// Stands for Rhinoceros
	habitat = "AL"; 	// Stands for Land
	porsiMakan = 5;
}

Rhinoceros::Rhinoceros(bool _isJinak, Point _point) {
	jenis = 0;
	kelas = 2;
	isJinak = _isJinak;
	point = _point;
	nama = "RH";
	habitat = "AL";
	porsiMakan = 5;
}

void Rhinoceros::interact() {
	std::cout << "The rhinoceros is ignoring you as he keeps eating." << std::endl;
}
