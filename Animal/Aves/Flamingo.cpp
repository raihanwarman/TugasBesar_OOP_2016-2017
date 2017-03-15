#include "Flamingo.h"
#include <iostream>
#include <stdlib.h>

Flamingo::Flamingo() {
	jenis = 0; 			// Herbivore
	kelas = 1;			// Aves
	isJinak = 0;
	point = Point();
	nama = "F"; 		// Stands for Flamingo
	habitat = "ALW";	// Stands for Air, Land, & Water
	porsiMakan = 3;
}

Flamingo::Flamingo(bool _isJinak, Point _point) {
	jenis = 0;
	kelas = 1;
	isJinak = _isJinak;
	point = _point;
	nama = "F";
	habitat = "ALW";
	porsiMakan = 3;
}

void Flamingo::interact() {
	int randAct = rand() % 2;
	switch(randAct) {
		case 1 :
			std::cout << "The flamingo just stand there with one leg." << std::endl;
			break;
		case 2 :
			std::cout << "The flamingo is sleeping with its head tucked to its body." << std::endl;
	}
}
