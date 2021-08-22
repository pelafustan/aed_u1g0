#include "../include/Protein.h"

// default constructor
Protein::Protein() {
    // default attributes
    this->Name = "";
    this->ID = "";
}

// specific constructor
Protein::Protein(std::string name, std::string id) {
    // user defined attributes
    this->Name = name;
    this->ID = id;
}

// overloaded specific constructor
Protein::Protein(std::string name, std::string id, std::list<Chain> chains) {
    // user defined attributes
    this->Name = name;
    this->ID = id;
    this->Chains = chains;
}

// mutators
void Protein::setName(std::string name) { this->Name = name; }
void Protein::setID(std::string id) { this->ID = id; }
void Protein::addChain(Chain chain) { this->Chains.push_back(chain); }

// accessors
std::string Protein::getName() { return this->Name; }
std::string Protein::getID() { return this->ID; }
std::list<Chain> Protein::getChains() { return this->Chains; }
