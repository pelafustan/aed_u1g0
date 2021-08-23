#include "Protein.h"
#include <limits>

#ifndef AUX_H
#define AUX_H

int options();
void noProtein();
void welcome();
void bye(bool&);
int how_many(std::string);
std::list<Atom> atomCreator(int);
std::list<AminoAcid> aaCreator(int);
std::list<Chain> chainCreator(int);
std::list<Protein> proteinCreator(int amount);
void addProtein(std::list<Protein>&);
void printProtein(std::list<Protein>);

#endif
