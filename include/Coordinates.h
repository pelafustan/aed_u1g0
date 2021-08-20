#ifndef COORDINATES_H
#define COORDINATES_H

class Coordinates {
    private:
        // attributes
        float x_pos;
        float y_pos;
        float z_pos;

    public:
        // default constructor
        Coordinates();

        // specific constructor
        Coordinates(float x, float y, float z);

        // mutators
        void setXPos(float value);
        void setYPos(float value);
        void setZPos(float value);

        // accessors
        float getXPos();
        float getYPos();
        float getZPos();
};

#endif
