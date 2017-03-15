#ifndef IGUANA_H
#define IGUANA_H

#include "Reptile.h"

class Iguana: public Reptile {
	public:
		/**
		* Iguana ctor
		*/
		Iguana();
		
		/**
		* Iguana ctor with params
		*/
		Iguana(bool _isJinak, Point _point);
		
		/**
		* Interact with Iguana
		*/
		virtual void interact();

};

#endif