#ifndef MOOSE_H
#define MOOSE_H

#include "Mammal.h"

class Moose: public Mammal {
    public:
        /**
        * Moose ctor
        */
        Moose();

        /**
        * ctor with param
        */
        Moose(bool _isJinak, Point _point);

		/**
		* Interact with Moose
		*/
		void interact();

};

#endif
