#include "Chimpanzees.h"
#include <iostream>

Chimpanzees::Chimpanzees() {
	jenis = 2; 			// Omnivore
	kelas = 2;			// Mammal
	isJinak = 0;
	point = Point();
	nama = "C"; 		// Stands for Chimpanzees
	habitat = "L"; 		// Stands for Land
	porsiMakan = 5;
}

Chimpanzees::Chimpanzees(bool _isJinak, Point _point) {
	jenis = 2;
	kelas = 2;
	isJinak = _isJinak;
	point = _point;
	nama = "C";
	habitat = "L";
	porsiMakan = 5;
}

void Chimpanzees::interact() {
	std::cout << "The chimpanzees keeps screaming." << std::endl;
}
