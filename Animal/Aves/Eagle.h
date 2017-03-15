#ifndef EAGLE_H
#define EAGLE_H

#include "Aves.h"

class Eagle: public Aves {
	public:
		/**
		* Eagle ctor
		*/
		Eagle();
		
		/**
		* Eagle ctor with params
		*/
		Eagle(bool _isJinak, Point _point);
		
		/**
		* Interact with Eagle
		*/
		virtual void interact();
};

#endif