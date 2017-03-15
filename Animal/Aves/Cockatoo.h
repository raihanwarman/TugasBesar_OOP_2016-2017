#ifndef COCKATOO_H
#define COCKATOO_H

#include "Aves.h"

class Cockatoo: public Animal {
	public:
		/**
		* Cockatoo ctor
		*/
		Cockatoo();
		
		/**
		* Cockatoo ctor with params
		*/
		Cockatoo(bool _isJinak, Point _point);
		
		/**
		* Interact with Cockatoo
		*/
		virtual void interact();
};

#endif