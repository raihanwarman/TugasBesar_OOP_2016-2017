#ifndef TURKEY_H
#define TURKEY_H

#include "Aves.h"

class Turkey: public Aves {
	public:
		/**
		* Turkey ctor
		*/
		Turkey();
		
		/**
		* Turkey ctor with params
		*/
		Turkey(bool _isJinak, Point _point);
		
		/**
		* Interact with Turkey
		*/
		virtual void interact();
};

#endif