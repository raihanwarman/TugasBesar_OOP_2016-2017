#ifndef AVES_H
#define AVES_H

#include "../Animal.h"

class Aves: public Animal {
	public:
		/**
		* Aves ctor
		*/
		Aves();
		
		/**
		* Aves ctor with params
		*/
		Aves(int _jenis, int _kelas, bool _isJinak, Point _point, string _nama, string _habitat, int _porsi);
		
		/**
		* Interact with Aves
		*/
		virtual void interact();
};

#endif