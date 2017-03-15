#include "Tiger.h"
#include <iostream>

Tiger::Tiger() {
	jenis = 1; 			// Carnivore
	kelas = 2;			// Mammal
	isJinak = 0;
	point = Point();
	nama = "T"; 		// Stands for Tiger
	habitat = "L"; 		// Stands for Land
	porsiMakan = 10;
}

Tiger::Tiger(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 2;
	isJinak = _isJinak;
	point = _point;
	nama = "T";
	habitat = "L";
	porsiMakan = 10;
}

void Tiger::interact() {
	std::cout << "The tiger roar" << std::endl;
}
