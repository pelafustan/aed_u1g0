#include "../include/Auxiliar.h"


int main() {
    bool run_flag = true;
    bool prot_flag = false;
    std::list<Protein> proteins;
    welcome();
    while (run_flag) {
        int user_choice = options();
        switch (user_choice) {
            case 1 : {
                prot_flag = true;
                int protein_amount = how_many("protein");
                proteins = proteinCreator(protein_amount);
                break;
            }
            case 2 : {
                if (prot_flag) addProtein(proteins);
                else noProtein();
                break;
            }
            case 3 : {
                if (prot_flag) printProtein(proteins); 
                else noProtein(); 
                break;
            }
            case 4 : {
                run_flag = false;
                break;
            }
        }
    }
    bye(prot_flag);
    return 0;
}
