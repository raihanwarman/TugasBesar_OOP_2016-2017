#include "Reptile.h"
#include <iostream>

Reptile::Reptile() {
	jenis = 1; 			// Carnivore
	kelas = 3;			// Reptile
	isJinak = 0;
	point = Point();
	nama = "R"; 		// Stands for Reptile
	habitat = "L"; 		// Stands for Land
	porsiMakan = 0;
}

Reptile::Reptile(int _jenis, int _kelas, bool _isJinak, Point _point, string _nama, string _habitat, int _porsi) {
	jenis = _jenis;
	kelas = _kelas;
	isJinak = _isJinak;
	point = _point;
	nama = _nama;
	habitat = _habitat;
	porsiMakan = _porsi;
}

void Reptile::interact() {
	std::cout << "*reptile's sound" << std::endl;
}
