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
        AminoAcid(std::string, int);

        // overloaded specific constructor
        AminoAcid(std::string, int, std::list<Atom>);

        // mutators
        void setName(std::string);
        void setNumber(int);
        void addAtom(std::string, int, float, float, float);

        // accessors
        std::string getName();
        int getNumber();
        std::list<Atom> getAtoms();
};

#endif
