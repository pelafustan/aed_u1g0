#include "../include/Atom.h"

// default constructor
Atom::Atom() {
    // defult attributes
    this->Name = "";
    this->Number = 0;
}

// specific constructor
Atom::Atom(std::string name, int number, float x, float y, float z) {
    // user defined attributes
    this->Name = name;
    this->Number = number;
    this->Coord = Coordinates(x, y, z);
}

// mutators
void Atom::setName(std::string value) { this->Name = value; }
void Atom::setNumber(int value) { this->Number = value; }
void Atom::setX(float value) { this->Coord.setXPos(value); }
void Atom::setY(float value) { this->Coord.setYPos(value); }
void Atom::setZ(float value) { this->Coord.setZPos(value); }

// accessors
std::string Atom::getName() { return this->Name; }
int Atom::getNumber() { return this->Number; }
float Atom::getX() { return this->Coord.getXPos(); }
float Atom::getY() { return this->Coord.getYPos(); }
float Atom::getZ() { return this->Coord.getZPos(); }
void Atom::getCoordinates() {
    float x = this->Coord.getXPos();
    float y = this->Coord.getYPos();
    float z = this->Coord.getZPos();
    std::cout << x << ", " << y << ", " << z << std::endl;
}
