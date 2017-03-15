#include "Elephant.h"
#include <iostream>

Elephant::Elephant() {
	jenis = 0; 			// Herbivore
	kelas = 2;			// Mammal
	isJinak = 0;
	point = Point();
	nama = "@"; 		// Stands for Elephant
	habitat = "L"; 		// Stands for Land
	porsiMakan = 15;
}

Elephant::Elephant(bool _isJinak, Point _point) {
	jenis = 0;
	kelas = 2;
	isJinak = _isJinak;
	point = _point;
	nama = "@";
	habitat = "L";
	porsiMakan = 15;
}

void Elephant::interact() {
	std::cout << "The elephant blow his nose like a trumpet." << std::endl;
}
