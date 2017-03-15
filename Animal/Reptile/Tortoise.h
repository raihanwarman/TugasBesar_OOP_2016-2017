#ifndef TORTOISE_H
#define TORTOISE_H

#include "Reptile.h"

class Tortoise: public Reptile {
	public:
		/**
		* Tortoise ctor
		*/
		Tortoise();
		
		/**
		* Tortoise ctor with params
		*/
		Tortoise(bool _isJinak, Point _point);
		
		/**
		* Interact with Tortoise
		*/
		virtual void interact();

};

#endif