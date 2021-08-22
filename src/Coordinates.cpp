#include "../include/Coordinates.h"

// default constructor
Coordinates::Coordinates() {
    // default attributes
    this->x_pos = 0;
    this->y_pos = 0;
    this->z_pos = 0;
}

// specific constructor
Coordinates::Coordinates(float x, float y, float z) {
    // user defined attributes
    this->x_pos = x; 
    this->y_pos = y; 
    this->z_pos = z; 
}

// mutators
void Coordinates::setXPos(float value) { this->x_pos = value; }
void Coordinates::setYPos(float value) { this->y_pos = value; }
void Coordinates::setZPos(float value) { this->z_pos = value; }

// accessors
float Coordinates::getXPos() { return this->x_pos; }
float Coordinates::getYPos() { return this->y_pos; }
float Coordinates::getZPos() { return this->z_pos; }
