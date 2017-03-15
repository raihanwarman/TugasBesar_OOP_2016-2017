#include "Animal.h"

Animal::Animal() {
	jenis = -1;
	kelas = 0;		// Animal
	isJinak = false;
	point = Point();
	nama = "";
	habitat = "";
	porsiMakan = 0;
}

Animal::Animal(int _jenis, int _kelas, bool _isJinak, Point _point, string _nama, string _habitat, int _porsi) {
	jenis = _jenis;
	kelas = _kelas;
	isJinak = _isJinak;
	point = _point;
	nama = _nama;
	habitat = _habitat;
	porsiMakan = _porsi;
}

int Animal::getJenis() {
	return jenis;
}

void Animal::setJenis(int _jenis) {
	jenis = _jenis;
}

int Animal::getKelas() {
	return kelas;
}

void Animal::setKelas(int _kelas) {
	kelas = _kelas;
}

bool Animal::getIsJinak() {
	return isJinak;
}

void Animal::setIsJinak(bool _isJinak) {
	isJinak = _isJinak;
}

Point Animal::getPoint() {
	return point;
}

void Animal::setPoint(Point _point) {
	point = _point;
}

string Animal::getNama() {
	return nama;
}

void Animal::setNama(string _nama) {
	nama = _nama;
}

string Animal::getHabitat() {
	return habitat;
}

void Animal::setHabitat(string _habitat) {
	habitat = _habitat;
}

int Animal::getPorsiMakan() {
	return porsiMakan;
}

void Animal::setPorsiMakan(int _porsi) {
	porsiMakan = _porsi;
}
