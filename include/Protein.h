#include "Chain.h"
#include <list>
#include <string>

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
        Protein(std::string name, std::string id);

        // mutators
        void setName(std::string name);
        void setID(std::string id);
        void addChain(Chain chain);

        // accessors
        std::string getName();
        std::string getID();
        std::list<Chain> getChains();
};

#endif
