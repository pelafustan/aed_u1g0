#include "Protein.h"
#include <limits>

#ifndef AUX_H
#define AUX_H

/**
 * Function handle the user input for menu option.
 * Print needed information and returns a valid option.
 */
int options();

/**
 * Function that prints a message when user select print or add protein option
 * in menu and there is no protein created yet.
 */
void noProtein();

/**
 * Function that print welcome message.
 */
void welcome();

/**
 * Function that prints ending message.
 * Recibe a bool type parameter that is used to print an aditional line if no
 * protein was created by the user.
 */
void bye(bool&);

/**
 * Function that handle user input when some objects are created.
 * The function ask the user the amount of <thing> that the user want to
 * create. The <thing> parameter should be a string and the returned value is
 * an integer.
 */
int how_many(std::string);

/**
 * This function handle creation of a list of atoms.
 * The needed parameter is the number of atoms and the return will be a list
 * with the number of atom with user input data.
 */
std::list<Atom> atomCreator(int);

/**
 * This function handle creation of a list of amino acids.
 * The needed parameter is the number of amino acids and the return will be a
 * list with the number of atom with user input data.
 */
std::list<AminoAcid> aaCreator(int);

/**
 * This function handle creation of a list of chains.
 * The needed parameter is the number of chains and the return will be a list
 * with the number of atom with user input data.
 */
std::list<Chain> chainCreator(int);

/**
 * This function handle creation of a list of proteins.
 * The needed parameter is the number of proteins and the return will be a
 * list with the number of proteins with user input data.
 */
std::list<Protein> proteinCreator(int amount);

/**
 * Function that handle the addition of a new protein to existing list. The
 * needed parameter is the list of proteins that will be populated.
 */
void addProtein(std::list<Protein>&);

/**
 * Function that prints data in list of proteins. The needed parameter is the
 * list of proteins that will be printed.
 */
void printProtein(std::list<Protein>);

#endif
