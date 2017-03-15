#ifndef FLAMINGO_H
#define FLAMINGO_H

#include "Aves.h"

class Flamingo: public Aves {
	public:
		/**
		* Flamingo ctor
		*/
		Flamingo();
		
		/**
		* Flamingo ctor with params
		*/
		Flamingo(bool _isJinak, Point _point);
		
		/**
		* Interact with Flamingo
		*/
		virtual void interact();
};

#endif