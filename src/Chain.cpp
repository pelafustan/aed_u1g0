#include "../include/Chain.h"

// default constructor
Chain::Chain() { this->ID = ""; } // default attributes

// specific constructor
Chain::Chain(std::string id) { this->ID = id; } // user defined attributes

// overloaded specific constructor
Chain::Chain(std::string id, std::list<AminoAcid> aminoacids) {
    // user defined attributes
    this->ID = id;
    this->Aminoacids = aminoacids;
}

// mutators
void Chain::setID(std::string id) { this->ID = id; }
void Chain::addAminoAcid(AminoAcid aminoacid) { this->Aminoacids.push_back(aminoacid); }

// accessors
std::string Chain::getID() { return this->ID; }
std::list<AminoAcid> Chain::getAminoacids() { return this->Aminoacids; }
