#include "../include/Protein.h"
#include <list>

// default constructor
Protein::Protein() {
    // default attributes
    Name = "";
    ID = "";
}

// specific constructor
Protein::Protein(std::string name, std::string id) {
    // user defined attributes
    Name = name;
    ID = id;
}

// mutators
void Protein::setName(std::string name) { Name = name; }
void Protein::setID(std::string id) { ID = id; }
void Protein::addChain(Chain chain) { Chains.push_back(chain); }

// accessors
std::string Protein::getName() { return Name; }
std::string Protein::getID() { return ID; }
std::list<Chain> Protein::getChains() { return Chains; }
