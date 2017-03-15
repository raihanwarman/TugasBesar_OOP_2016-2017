#ifndef TIGER_H
#define TIGER_H

#include "Mammal.h"

class Tiger: public Mammal {
    public:
        /**
        * Tiger ctor
        */
        Tiger();

        /**
        * ctor with param
        */
        Tiger(bool _isJinak, Point _point);
		
		/**
		* Interact with Tiger
		*/
		void interact();

};

#endif
