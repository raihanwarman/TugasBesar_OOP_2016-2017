#include "Eagle.h"
#include <iostream>

Eagle::Eagle() {
	jenis = 1;	 		// Carnivore
	kelas = 1;			// Aves
	isJinak = 0;
	point = Point();
	nama = "EG"; 		// Stands for Eagle
	habitat = "AL";		// Stands for Air and Land
	porsiMakan = 5;
}

Eagle::Eagle(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 1;
	isJinak = _isJinak;
	point = _point;
	nama = "EG";
	habitat = "AL";
	porsiMakan = 5;
}

void Eagle::interact() {
	std::cout << "The eagle just sit there elegantly" << std::endl;
}
