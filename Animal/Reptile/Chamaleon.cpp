#include "Chamaleon.h"
#include <iostream>

Chamaleon::Chamaleon() {
	jenis = 1; 			// Carnivore
	kelas = 3;			// Reptile
	isJinak = 0;
	point = Point();
	nama = "CH"; 		// Stands for Chamaleon
	habitat = "L"; 		// Stands for Land
	porsiMakan = 3;
}

Chamaleon::Chamaleon(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 3;
	isJinak = _isJinak;
	point = _point;
	nama = "CH";
	habitat = "L";
	porsiMakan = 3;
}

void Chamaleon::interact() {
	std::cout << "As you got closer, the chameleon change its colour." << std::endl;
}
