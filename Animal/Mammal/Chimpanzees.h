#ifndef CHIMPANZEES_H
#define CHIMPANZEES_H

#include "Mammal.h"

class Chimpanzees: public Mammal {
    public:
        /**
        * Lion ctor
        */
        Chimpanzees();

        /**
        * ctor with param
        */
        Chimpanzees(bool _isJinak, Point _point);
		
		/**
		* Interact with Chimpanzees
		*/
		void interact();

};

#endif
