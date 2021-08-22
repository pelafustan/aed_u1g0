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
        Coordinates(float, float, float);

        // mutators
        void setXPos(float);
        void setYPos(float);
        void setZPos(float);

        // accessors
        float getXPos();
        float getYPos();
        float getZPos();
};

#endif
