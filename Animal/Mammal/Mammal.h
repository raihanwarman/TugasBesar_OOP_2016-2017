#ifndef MAMMAL_H
#define MAMMAL_H

#include "../Animal.h"

class Mammal: public Animal {
    public:
        /**
        * Mammal ctor
        */
        Mammal();

        /**
        * Mammal ctor with params
        */
        Mammal(int _jenis, int _kelas, bool _isJinak, Point _point, string _nama, string _habitat, int _porsi);

        /**
        * Interact with Mammal
        */
        virtual void interact();
};

#endif
