#include "../include/AminoAcid.h"

// default constructor
AminoAcid::AminoAcid() {
    // default attributes
    this->Name = "";
    this->Number = 0;
}

// specific constructor
AminoAcid::AminoAcid(std::string name, int number) {
    // user defined attributes
    this->Name = name;
    this->Number = number;
}

// overloaded specific constructor
AminoAcid::AminoAcid(std::string name, int number, std::list<Atom> atoms) {
    // user defined attributes
    this->Name = name;
    this->Number = number;
    this->Atoms = atoms;
}

// mutators
void AminoAcid::setName(std::string name) { this->Name = name; }
void AminoAcid::setNumber(int number) { this->Number = number; }
void AminoAcid::addAtom(std::string name, int number, float x, float y, float z) {
    Atom atom = Atom(name, number, x, y, z);
    this->Atoms.push_back(atom);
}

// accessors
std::string AminoAcid::getName() { return this->Name; }
int AminoAcid::getNumber() { return this->Number; }
std::list<Atom> AminoAcid::getAtoms() { return this->Atoms; }
