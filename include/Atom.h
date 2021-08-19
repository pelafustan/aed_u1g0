#include "../include/Coordinates.h"
#include <string>

#ifndef ATOM_H
#define ATOM_H

class Atom {
    private:
        std::string Name;
        int Number;
        Coordinates Coord;

    public:
        // default constructor
        Atom();

        // specific constructor
        Atom(std::string name, int number, float x, float y, float z);

        // mutators
        void setName(std::string value);
        void setNumber(int value);
        void setX(float value);
        void setY(float value);
        void setZ(float value);
        void setCoordinates(float x, float y, float z);

        // accessors
        std::string getName();
        int getNumber();
        float getX();
        float getY();
        float getZ();
        void getCoordinates();
};

#endif
