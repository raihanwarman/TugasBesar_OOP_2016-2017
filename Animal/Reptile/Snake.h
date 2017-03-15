#ifndef SNAKE_H
#define SNAKE_H

#include "Reptile.h"

class Snake: public Reptile {
	public:
		/**
		* Snake ctor
		*/
		Snake();
		
		/**
		* Snake ctor with params
		*/
		Snake(bool _isJinak, Point _point);
		
		/**
		* Interact with Snake
		*/
		virtual void interact();

};

#endif