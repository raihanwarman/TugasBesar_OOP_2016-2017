#include "Iguana.h"
#include <iostream>
#include <stdlib.h>

Iguana::Iguana() {
	jenis = 1; 			// Carnivore
	kelas = 3;			// Reptile
	isJinak = 0;
	point = Point();
	nama = "I"; 		// Stands for Iguana
	habitat = "L"; 		// Stands for Land
	porsiMakan = 3;
}

Iguana::Iguana(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 3;
	isJinak = _isJinak;
	point = _point;
	nama = "I";
	habitat = "L";
	porsiMakan = 3;
}

void Iguana::interact() {
int randAct = rand() % 2;
	switch(randAct) {
		case 1 :
			std::cout << "The iguana is good at blending with surrounding, you can't find even one." << std::endl;
			break;
		case 2 :
			std::cout << "The iguana is sunbathing." << std::endl;
	}
}
