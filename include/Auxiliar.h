#include "Protein.h"
#include <limits>

#ifndef AUX_H
#define AUX_H

int how_many(std::string);
std::list<Atom> atomCreator(int);
std::list<AminoAcid> aaCreator(int);
std::list<Chain> chainCreator(int);
std::list<Protein> proteinCreator(int amount);
void printProtein(std::list<Protein>);

#endif
