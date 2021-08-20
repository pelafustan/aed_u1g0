#include "../include/AminoAcid.h"
#include <list>

// default constructor
AminoAcid::AminoAcid() {
    // default attributes
    Name = "";
    Number = 0;
}

// specific constructor
AminoAcid::AminoAcid(std::string name, int number) {
    // user defined attributes
    Name = name;
    Number = number;
}

// overloaded specific constructor
AminoAcid::AminoAcid(std::string name, int number, std::list<Atom> atoms) {
    // user defined attributes
    Name = name;
    Number = number;
    Atoms = atoms;
}

// mutators
void AminoAcid::setName(std::string name) { Name = name; }
void AminoAcid::setNumber(int number) { Number = number; }
void AminoAcid::addAtom(std::string name, int number, float x, float y, float z) {
    Atom atom = Atom(name, number, x, y, z);
    Atoms.push_back(atom);
}

// accessors
std::string AminoAcid::getName() { return Name; }
int AminoAcid::getNumber() { return Number; }
std::list<Atom> AminoAcid::getAtoms() { return Atoms; }
