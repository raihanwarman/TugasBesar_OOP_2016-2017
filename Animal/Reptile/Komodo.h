#ifndef KOMODO_H
#define KOMODO_H

#include "Reptile.h"

class Komodo: public Reptile {
	public:
		/**
		* Komodo ctor
		*/
		Komodo();
		
		/**
		* Komodo ctor with params
		*/
		Komodo(bool _isJinak, Point _point);
		
		/**
		* Interact with Komodo
		*/
		virtual void interact();

};

#endif