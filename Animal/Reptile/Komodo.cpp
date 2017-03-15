#include "Komodo.h"
#include <iostream>

Komodo::Komodo() {
	jenis = 1; 			// Carnivore
	kelas = 3;			// Reptile
	isJinak = 0;
	point = Point();
	nama = "K"; 		// Stands for Komodo
	habitat = "L";		// Stands for Land
	porsiMakan = 5;
}

Komodo::Komodo(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 3;
	isJinak = _isJinak;
	point = _point;
	nama = "K";
	habitat = "L";
	porsiMakan = 5;
}

void Komodo::interact() {
	std::cout << "The komodo just stay still and tuck its tongue" << std::endl;
}
