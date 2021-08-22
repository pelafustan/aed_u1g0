#include "../include/Protein.h"
#include "../include/Auxiliar.h"

int main() {

    int protein_amount = how_many("protein");
    std::list<Protein> proteins = proteinCreator(protein_amount);

    printProtein(proteins);

    return 0;
}
