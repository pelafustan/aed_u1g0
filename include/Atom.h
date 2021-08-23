#include "Coordinates.h"
#include <string>
#include <iostream>

#ifndef ATOM_H
#define ATOM_H
 /**
  * Class that serves as blueprint for an atom.
  */
class Atom {
    private:
        std::string Name;
        int Number;
        Coordinates Coord;

    public:
        /** 
         * Default constructor.
         * Allows instantiation with default attributes.
         */
        Atom();

        /** Specific constructor.
         * Allows instantiation with user defined attributes.
         * The needed parameters are: name, number, x, y and z coordinates.
         */
        Atom(std::string, int, float, float, float);

        /**
         * Mutator for atom name. Parameter should be a string.
         */
        void setName(std::string);

        /**
         * Mutator for atom number. Parameter should be a integer.
         */
        void setNumber(int);

        /**
         * Mutator for atom X coordinate. Need a float parameter.
         */
        void setX(float);

        /**
         * Mutator for atom Y coordinate. Need a float parameter.
         */
        void setY(float);

        /**
         * Mutator for atom Z coordinate. Need a float parameter.
         */
        void setZ(float);

        /**
         * Mutator for all three coordinates. The order is x, y and z,
         * respectively. Parameter should be float.
         */
        void setCoordinates(float, float, float);

        /**
         * Accessor for atom name. Returns a string.
         */
        std::string getName();

        /**
         * Accessor for atom number. Returns an integer.
         */
        int getNumber();

        /**
         * Accessor for atom X coordinate. Returns a float.
         */
        float getX();

        /**
         * Accessor for atom Y coordinate. Returns a float.
         */
        float getY();

        /**
         * Accessor for atom Z coordinate. Returns a float.
         */
        float getZ();

        /**
         * Accessor that print all 3 coordinates.
         */
        void getCoordinates();
};

#endif
