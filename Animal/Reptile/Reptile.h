#ifndef REPTILE_H
#define REPTILE_H

#include "../Animal.h"

class Reptile: public Animal {
	public:
		/**
		* Reptile ctor
		*/
		Reptile();
		
		/**
		* Reptile ctor with params
		*/
		Reptile(int _jenis, int _kelas, bool _isJinak, Point _point, string _nama, string _habitat, int _porsi);
		
		/**
		* Interact with Reptile
		*/
		virtual void interact();

};

#endif