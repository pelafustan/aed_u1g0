#include "AminoAcid.h"

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
        Chain(std::string);

        // overloaded specific constructor
        Chain(std::string, std::list<AminoAcid>);
        
        // mutators
        void setID(std::string);
        void addAminoAcid(AminoAcid);
        
        // accessors
        std::string getID();
        std::list<AminoAcid> getAminoacids();
};

#endif
