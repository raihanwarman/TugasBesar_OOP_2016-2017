#ifndef BAT_H
#define BAT_H

#include "Mammal.h"

class Bat: public Mammal {
    public:
        /**
        * Bat ctor
        */
        Bat();

        /**
        * ctor with param
        */
        Bat(bool _isJinak, Point _point);

		/**
		* Interact with bat
		*/
		void interact();

};

#endif
