#include "Atom.h"
#include <list>

#ifndef AMINOACID_H
#define AMINOACID_H

class AminoAcid {
    private:
        std::string Name;
        int Number;
        std::list<Atom> Atoms;
    public:
        // default constructor
        AminoAcid();

        // specific constructor
        AminoAcid(std::string name, int number);

        // overloaded specific constructor
        AminoAcid(std::string name, int number, std::list<Atom> atoms);

        // mutators
        void setName(std::string name);
        void setNumber(int number);
        void addAtom(std::string name, int number, float x, float y, float z);

        // accessors
        std::string getName();
        int getNumber();
        std::list<Atom> getAtoms();
};

#endif
