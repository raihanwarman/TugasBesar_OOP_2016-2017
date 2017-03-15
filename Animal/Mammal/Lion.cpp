#include "Lion.h"
#include <iostream>
#include <stdlib.h>

Lion::Lion() {
	jenis = 1; 			// Carnivore
	kelas = 2;			// Mammal
	isJinak = 0;
	point = Point();
	nama = "L"; 		// Stands for Lion
	habitat = "L"; 		// Stands for Land
	porsiMakan = 10;
}

Lion::Lion(bool _isJinak, Point _point) {
	jenis = 1;
	kelas = 2;
	isJinak = _isJinak;
	point = _point;
	nama = "L";
	habitat = "L";
	porsiMakan = 10;
}

void Lion::interact() {
	int randAct = rand() % 2;
	switch(randAct) {
		case 1 :
			std::cout << "The lion is sleeping" << std::endl;
			break;
		case 2 :
			std::cout << "The lion roar" << std::endl;
	}
}
