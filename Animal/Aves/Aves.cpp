#include "Aves.h"
#include <iostream>

Aves::Aves() {
	jenis = -1; 		// Aves
	kelas = 1;			// Aves
	isJinak = 0;
	point = Point();
	nama = "A"; 		// Stands for Aves
	habitat = "AL";		// Stands for Air and Land
	porsiMakan = 0;
}

Aves::Aves(int _jenis, int _kelas, bool _isJinak, Point _point, string _nama, string _habitat, int _porsi) {
	jenis = _jenis;
	kelas = _kelas;
	isJinak = _isJinak;
	point = _point;
	nama = _nama;
	habitat = _habitat;
	porsiMakan = _porsi;
}

void Aves::interact() {
	std::cout << "chirp" << std::endl;
}
