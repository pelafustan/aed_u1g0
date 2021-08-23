#include "Chain.h"

#ifndef PROTEIN_H
#define PROTEIN_H

/**
 * Class that serve as blueprint for a protein.
 */
class Protein {
    private:
        std::string Name;
        std::string ID;
        std::list<Chain> Chains;
    public:
        /**
         * Default constructor.
         * Allow instantiation with default attributes.
         */
        Protein();

        /**
         * Specific constructor.
         * Allows instantiation with user defined attributes.
         * Needed parameters: protein name(string) and id (string).
         */
        Protein(std::string, std::string);

        /**
         * Overloaded specific constructor.
         * Also allows the user to instantiate the protein with a list of
         * chains.
         */
        Protein(std::string, std::string, std::list<Chain>);

        /**
         * Mutator for protein name.
         */
        void setName(std::string);

        /**
         * Mutator for protein id.
         */
        void setID(std::string);

        /**
         * Mutator that add a chain to list of chains.
         */
        void addChain(Chain);

        /**
         * Accessor that returns protein name.
         */
        std::string getName();

        /**
         * Accessor that returns protein id.
         */
        std::string getID();

        /**
         * Accessor that returns protein list of chains.
         */
        std::list<Chain> getChains();
};

#endif
