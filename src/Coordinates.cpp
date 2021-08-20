#include "../include/Coordinates.h"

// default constructor
Coordinates::Coordinates() {
    // default attributes
    x_pos = 0;
    y_pos = 0;
    z_pos = 0;
}

// specific constructor
Coordinates::Coordinates(float x, float y, float z) {
    // user defined attributes
    x_pos = x; 
    y_pos = y; 
    z_pos = z; 
}

// mutators
void Coordinates::setXPos(float value) { x_pos = value; }
void Coordinates::setYPos(float value) { y_pos = value; }
void Coordinates::setZPos(float value) { z_pos = value; }

// accessors
float Coordinates::getXPos() { return x_pos; }
float Coordinates::getYPos() { return y_pos; }
float Coordinates::getZPos() { return z_pos; }
