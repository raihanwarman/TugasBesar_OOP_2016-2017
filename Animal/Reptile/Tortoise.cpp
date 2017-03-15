#include "Tortoise.h"
#include <iostream>

Tortoise::Tortoise() {
	jenis = 0; 			// Herbivore
	kelas = 3;			// Reptile
	isJinak = 0;
	point = Point();
	nama = "#"; 		// Stands for Tortoise
	habitat = "LW" ;		// Stands for Land & Water
	porsiMakan = 2;
}

Tortoise::Tortoise(bool _isJinak, Point _point) {
	jenis = 0;
	kelas = 3;
	isJinak = _isJinak;
	point = _point;
	nama = "#";
	habitat = "LW";
	porsiMakan = 2;
}

void Tortoise::interact() {
	std::cout << "The tortoise is sunbathing" << std::endl;
}
