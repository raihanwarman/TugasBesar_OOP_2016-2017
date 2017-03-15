#ifndef CHAMELEON_H
#define CHAMELEON_H

#include "Reptile.h"

class Chamaleon: public Reptile {
	public:
		/**
		* Chamaleon ctor
		*/
		Chamaleon();
		
		/**
		* Chamaleon ctor with params
		*/
		Chamaleon(bool _isJinak, Point _point);
		
		/**
		* Interact with Chamaleon
		*/
		virtual void interact();

};

#endif