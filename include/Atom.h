#include "Coordinates.h"
#include <string>
#include <iostream>

#ifndef ATOM_H
#define ATOM_H

class Atom {
    private:
        // attributes
        std::string Name;
        int Number;
        Coordinates Coord;

    public:
        // default constructor
        Atom();

        // specific constructor
        Atom(std::string, int, float, float, float);

        // mutators
        void setName(std::string);
        void setNumber(int);
        void setX(float);
        void setY(float);
        void setZ(float);
        void setCoordinates(float, float, float);

        // accessors
        std::string getName();
        int getNumber();
        float getX();
        float getY();
        float getZ();
        void getCoordinates();
};

#endif
