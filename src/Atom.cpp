#include "../include/Atom.h"
#include <iostream>

// default constructor
Atom::Atom() {
    // defult attributes
    Name = "";
    Number = 0;
}

// specific constructor
Atom::Atom(std::string name, int number, float x, float y, float z) {
    // user defined attributes
    Name = name;
    Number = number;
    Coord = Coordinates(x, y, z);
}

// mutators
void Atom::setName(std::string value) { Name = value; }
void Atom::setNumber(int value) { Number = value; }
void Atom::setX(float value) { Coord.setXPos(value); }
void Atom::setY(float value) { Coord.setYPos(value); }
void Atom::setZ(float value) { Coord.setZPos(value); }

// accessors
std::string Atom::getName() { return Name; }
int Atom::getNumber() { return Number; }
float Atom::getX() { return Coord.getXPos(); }
float Atom::getY() { return Coord.getYPos(); }
float Atom::getZ() { return Coord.getZPos(); }
void Atom::getCoordinates() {
    float x = Coord.getXPos();
    float y = Coord.getYPos();
    float z = Coord.getZPos();
    std::cout << x << ", " << y << ", " << z << std::endl;
}
