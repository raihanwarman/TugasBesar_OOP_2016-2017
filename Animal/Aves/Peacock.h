#ifndef PEACOCK_H
#define PEACOCK_H

#include "Aves.h"

class Peacock: public Aves {
	public:
		/**
		* Peacock ctor
		*/
		Peacock();
		
		/**
		* Peacock ctor with params
		*/
		Peacock(bool _isJinak, Point _point);
		
		/**
		* Interact with Peacock
		*/
		virtual void interact();
};

#endif