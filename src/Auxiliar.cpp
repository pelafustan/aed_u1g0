#include "../include/Auxiliar.h"

void noProtein(){
    std::cout << "----------------------------" << std::endl;
    std::cout << "No proteins created yet.\n";
    std::cout << "Try with other option...\n";
}

int options() {
    int opt;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Choose a number between following options:\n";
    std::cout << "1. Create list of proteins.\n";
    std::cout << "2. Add protein to existing list of protein.\n";
    std::cout << "3. Print protein data (if exists)\n";
    std::cout << "4. Finish program.\n";
    std::cout << "Choose your destiny: ";
    std::cin >> opt;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if ((opt < 1) || (opt > 4)) {
        std::cout << "----------------------------" << std::endl;
        std::cout << "Your selection is out of range.\n";
        std::cout << "Try again...\n";
        opt = options();
    }
    return opt;
}

void welcome() {
    std::cout << "----------------------------" << std::endl;
    std::cout << "Hello there.\n";
    std::cout << "This program allows you to create a list of proteins\n";
    std::cout << "with the following attributes:\n";
    std::cout << "\t-Each protein have a name, an ID and a list of chains.\n";
    std::cout << "\t-Each chain have an ID and a list of amino acids.\n";
    std::cout << "\t-Each amino acid have a name, a number and a list of atoms.\n";
    std::cout << "\t-Each atom have a name, a number and 3D coordinates.\n";
    std::cout << "All the data should be passed to promp by user\n";
}

void bye(bool& flag) {
    if (!flag) {
        std::cout << "----------------------------" << std::endl;
    }
    std::cout << "Thank for using this program.\n";
    std::cout << "See you next time!\n";
    std::cout << "----------------------------" << std::endl;
}

int how_many(std::string thing) {
    int quantity;
    std::cout << "How many " << thing << "s?: ";
    std::cin >> quantity;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (quantity < 1) {
        std::cout << "At least you should have one " << thing << std::endl;
        quantity = how_many(thing);
    }
    return quantity;
}

std::list<Atom> atomCreator(int amount) {
    std::list<Atom> atoms;
    for (int i = 0; i < amount; i++) {
        std::string name;
        float x;
        float y;
        float z;
        std::cout << "What element is atom number " << i+1 << "?" << std::endl;
        std::getline(std::cin, name);
        std::cout << "Give me the x coordinate of atom number " << i+1 << ": " << std::endl;
        std::cin >> x;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Give me the y coordinate of atom number " << i+1 << ": " << std::endl;
        std::cin >> y;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Give me the z coordinate of atom number " << i+1 << ": " << std::endl;
        std::cin >> z;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        Atom atom = Atom(name, i+1, x, y, z);
        atoms.push_back(atom);
    }
    return atoms;
}

std::list<AminoAcid> aaCreator(int amount) {
    std::list<AminoAcid> aminoacids;
    for (int i = 0; i < amount; i++){
        std::string name;
        std::cout << "Give me the name of amino acid number " << i+1 << std::endl;
        std::getline(std::cin, name);
        int atom_amount = how_many("atom"); 
        std::list<Atom> atoms = atomCreator(atom_amount);
        AminoAcid aminoacid = AminoAcid(name, i+1, atoms);
        aminoacids.push_back(aminoacid);
    }
    return aminoacids;
}

std::list<Chain> chainCreator(int amount) {
    std::list<Chain> chains;
    for (int i = 0; i < amount; i++) {
        std::string id;
        std::cout << "Give me the ID of chain number " << i+1 << std::endl;
        std::getline(std::cin, id);
        int aa_amount = how_many("amino acid");
        std::list<AminoAcid> aminoacids = aaCreator(aa_amount);
        Chain chain = Chain(id, aminoacids);
        chains.push_back(chain);
    }
    return chains;
}

std::list<Protein> proteinCreator(int amount) {
    std::list<Protein> proteins;
    for (int i = 0; i < amount; i++) {
        std::string name;
        std::string id;
        std::cout << "Give me the name of protein number " << i+1 << std::endl;
        std::getline(std::cin, name);
        std::cout << "Give me the ID of protein number " << i+1 << std::endl;
        std::getline(std::cin, id);
        int chain_amount = how_many("chain");
        std::list<Chain> chains = chainCreator(chain_amount);
        Protein protein = Protein(name, id, chains);
        proteins.push_back(protein);
    }
    return proteins;
}

void addProtein(std::list<Protein>& proteins) {
    std::string name;
    std::string id;
    std::cout << "Give me the name of new protein: ";
    std::getline(std::cin, name);
    std::cout << "Give me the ID of new protein ";
    std::getline(std::cin, id);
    int chain_amount = how_many("chain");
    std::list<Chain> chains = chainCreator(chain_amount);
    Protein protein = Protein(name, id, chains);
    proteins.push_back(protein);
}

void printProtein(std::list<Protein> proteins) {
    std::cout << "----------------------------" << std::endl;
    std::cout << "Now I'll print your proteins" << std::endl;
    std::cout << "----------------------------" << std::endl;
    for (Protein &protein : proteins) {
        std::cout << "Protein name: " << protein.getName() << std::endl;
        std::cout << "Protein ID: " << protein.getID() << std::endl;
        for (Chain &chain : protein.getChains()) {
            std::cout << "\tChain ID: " << chain.getID() << std::endl;
            for (AminoAcid &aa : chain.getAminoacids()) {
                std::cout << "\t\tAmino acid name: " << aa.getName() << std::endl;
                std::cout << "\t\tAmino acid number: " << aa.getNumber() << std::endl;
                for (Atom &at : aa.getAtoms()) {
                    std::cout << "\t\t\tAtom name: " << at.getName() << std::endl;
                    std::cout << "\t\t\tAtom number: " << at.getNumber() << std::endl;
                    std::cout << "\t\t\tCoordinates: ";
                    at.getCoordinates();
                }
            }
        }
        std::cout << "----------------------------" << std::endl;
    }
}
