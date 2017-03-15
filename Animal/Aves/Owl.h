#ifndef OWL_H
#define OWL_H

#include "Aves.h"

class Owl: public Aves {
	public:
		/**
		* Owl ctor
		*/
		Owl();
		
		/**
		* Owl ctor with params
		*/
		Owl(bool _isJinak, Point _point);
		
		/**
		* Interact with Owl
		*/
		virtual void interact();
};

#endif