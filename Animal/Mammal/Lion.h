#ifndef LION_H
#define LION_H

#include "Mammal.h"

class Lion: public Mammal {
    public:
        /**
        * Lion ctor
        */
        Lion();

        /**
        * ctor with param
        */
        Lion(bool _isJinak, Point _point);
		
		/**
		* Interact with Lion
		*/
		void interact();

};

#endif // LION_H
