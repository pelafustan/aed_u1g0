#include "AminoAcid.h"
#include <list>

#ifndef CHAIN_H
#define CHAIN_H

class Chain {
    private:
        std::string ID;
        std::list<AminoAcid> Aminoacids;
    public:
        // default constructor
        Chain();

        // specific constructor
        Chain(std::string id);

        // overloaded specific constructor
        Chain(std::string id, std::list<AminoAcid> aminoacids);
        
        // mutators
        void setID(std::string id);
        void addAminoAcid(AminoAcid aminoacid);
        
        // accessors
        std::string getID();
        std::list<AminoAcid> getAminoacids();
};

#endif
