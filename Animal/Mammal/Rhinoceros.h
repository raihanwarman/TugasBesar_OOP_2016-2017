#ifndef RHINOCEROS_H
#define RHINOCEROS_H

#include "Mammal.h"

class Rhinoceros: public Mammal {
    public:
        /**
        * Rhinoceros ctor
        */
        Rhinoceros();

        /**
        * ctor with param
        */
        Rhinoceros(bool _isJinak, Point _point);

		/**
		* Interact with Rhinoceros
		*/
		void interact();

};

#endif
