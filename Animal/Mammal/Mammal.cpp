#include "Mammal.h"
#include <iostream>

Mammal::Mammal() {
	jenis = -1;
	kelas = 2;			// Mammal
	isJinak = 0;
	point = Point();
	nama = "M"; 		// Stands for Mammal
	habitat = "L"; 		// Stands for Land (majority lives in Land)
	porsiMakan = 0;
}

Mammal::Mammal(int _jenis, int _kelas, bool _isJinak, Point _point, string _nama, string _habitat, int _porsi) {
	jenis = _jenis;
	kelas = _kelas;
	isJinak = _isJinak;
	point = _point;
	nama = _nama;
	habitat = _habitat;
	porsiMakan = _porsi;
}

void Mammal::interact() {
	std::cout << "*mammal's sound" << std::endl;
}
