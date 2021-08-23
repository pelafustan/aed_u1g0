#ifndef COORDINATES_H
#define COORDINATES_H

/**
 * Class that serves as blueprint for coordinates of an Atom. 
 */
class Coordinates {
    private:
        float x_pos;
        float y_pos;
        float z_pos;

    public:
        /**
         * Default constructor.
         * This allows instantiation with default attributes.
         */
        Coordinates();

        /**
         * Specific constructor.
         * Allows instantiation with user defined attributes.
         * This attributes are x, y and z coordinates, all float type.
         */
        Coordinates(float, float, float);

        /**
         * Mutator for X coordinate. Need a float parameter.
         */
        void setXPos(float);

        /**
         * Mutator for Y coordinate. Need a float parameter.
         */
        void setYPos(float);

        /**
         * Mutator for Z coordinate. Need a float parameter.
         */
        void setZPos(float);

        /**
         * Accessor for X coordinate. Returns a float.
         */
        float getXPos();

        /**
         * Accessor for Y coordinate. Returns a float.
         */
        float getYPos();

        /**
         * Accessor for Z coordinate. Returns a float.
         */
        float getZPos();
};

#endif
