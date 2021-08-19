#include "../include/Atom.h"

// default constructor
Atom::Atom() {
    Name = "";
    Number = 0;
}

// specific constructor
Atom::Atom(std::string name, int number, float x, float y, float z) {
    Name = name;
    Number = number;
    Coord = Coordinates(x, y, z);
}

// mutators
void Atom::setName(std::string value) {
    Name = value;
}

void Atom::setNumber(int value) {
    Number = value;
}

void Atom::setX(float value) {
    Coord.setXPos(value);
}

void Atom::setY(float value) {
    Coord.setYPos(value);
}

void Atom::setZ(float value) {
    Coord.setZPos(value);
}

