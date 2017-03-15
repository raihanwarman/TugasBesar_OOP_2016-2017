#ifndef CROCODILE_H
#define CROCODILE_H

#include "Reptile.h"

class Crocodile: public Reptile {
	public:
		/**
		* Crocodile ctor
		*/
		Crocodile();
		
		/**
		* Crocodile ctor with params
		*/
		Crocodile(bool _isJinak, Point _point);
		
		/**
		* Interact with Crocodile
		*/
		virtual void interact();

};

#endif