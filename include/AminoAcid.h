#include "Atom.h"
#include <list>

#ifndef AMINOACID_H
#define AMINOACID_H

/**
 * Class that serve as blueprint for an amino acid.
 */
class AminoAcid {
    private:
        std::string Name;
        int Number;
        std::list<Atom> Atoms;
    public:
        /**
         * Default constructor.
         * Allow instantiation with default attributes.
         */
        AminoAcid();

        /**
         * Specific constructor.
         * Allows instantiation with user defined attributes.
         * Needed parameters: name (string) and number (integer).
         */
        AminoAcid(std::string, int);

        /**
         * Overloaded specific constructor.
         * Besides the parameters asked in the specific constructor, this
         * allows the user to instantiate the amino acid with a list of atoms.
         */
        AminoAcid(std::string, int, std::list<Atom>);

        /**
         * Mutator for amino acid name.
         */
        void setName(std::string);

        /**
         * Mutator for amino acid number.
         */
        void setNumber(int);

        /**
         * Mutator that add an atom to list of atoms.
         */
        void addAtom(std::string, int, float, float, float);

        /**
         * Accessor that returns amino acid name.
         */
        std::string getName();

        /**
         * Accessor that returns amino acid number.
         */
        int getNumber();

        /**
         * Accessor that returns amino acid list of atoms.
         */
        std::list<Atom> getAtoms();
};

#endif
