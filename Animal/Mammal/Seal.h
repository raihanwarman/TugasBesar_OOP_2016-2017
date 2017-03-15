#ifndef SEAL_H
#define SEAL_H

#include "Mammal.h"

class Seal: public Mammal {
    public:
        /**
        * Seal ctor
        */
        Seal();

        /**
        * ctor with param
        */
        Seal(bool _isJinak, Point _point);
		
		/**
		* Interact with Seal
		*/
		void interact();

};

#endif
