#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "Mammal.h"

class Elephant: public Mammal {
    public:
        /**
        * Elephant ctor
        */
        Elephant();

        /**
        * ctor with param
        */
        Elephant(bool _isJinak, Point _point);
		
		/**
		* Interact with Elephant
		*/
		void interact();

};

#endif