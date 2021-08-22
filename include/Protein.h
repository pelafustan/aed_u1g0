#include "Chain.h"

#ifndef PROTEIN_H
#define PROTEIN_H

class Protein {
    private:
        // attributes
        std::string Name;
        std::string ID;
        std::list<Chain> Chains;
    public:
        // default constructor
        Protein();

        // specific constructor
        Protein(std::string, std::string);

        // overloaded specific constructor
        Protein(std::string, std::string, std::list<Chain>);

        // mutators
        void setName(std::string);
        void setID(std::string);
        void addChain(Chain);

        // accessors
        std::string getName();
        std::string getID();
        std::list<Chain> getChains();
};

#endif
