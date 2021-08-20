#include "../include/Chain.h"
#include <list>

// default constructor
Chain::Chain() { ID = ""; } // default attributes

// specific constructor
Chain::Chain(std::string id) { ID = id; } // user defined attributes

// overloaded specific constructor
Chain::Chain(std::string id, std::list<AminoAcid> aminoacids) {
    // user defined attributes
    ID = id;
    Aminoacids = aminoacids;
}

// mutators
void Chain::setID(std::string id) { ID = id; }
void Chain::addAminoAcid(AminoAcid aminoacid) { Aminoacids.push_back(aminoacid); }

// accessors
std::string Chain::getID() { return ID; }
std::list<AminoAcid> Chain::getAminoacids() { return Aminoacids; }
