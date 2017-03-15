#include "Snake.h"
#include <iostream>

Snake::Snake() {
	jenis = 1; 			// Carnivore
	kelas = 3;			// Reptile
	isJinak = 0;
	point = Point();
	nama = "SK"; 		// Stands for Snake
	habitat = "L"; 		// Stands for Land
	porsiMakan = 2;
}

Snake::Snake(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 3;
	isJinak = _isJinak;
	point = _point;
	nama = "SK";
	habitat = "L";
	porsiMakan = 2;
}

void Snake::interact() {
	std::cout << "The snake is hissing as you got closer." << std::endl;
}
