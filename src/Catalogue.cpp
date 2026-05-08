#include "../include/Catalogue.h"
#include "../include/Couleurs.h"
#include <iostream>
using namespace std;

void Catalogue::ajouterCadeau(Cadeau c) {
    cadeaux.push_back(c);
}
void Catalogue::afficherCadeaux() {
    for (int i = 0; i < cadeaux.size(); i++) {
        cout << BLANC << "  " << i+1 << ". 🎀 "
             << cadeaux[i].getNom()
             << GRIS << " (" << cadeaux[i].getCout() << " pts)"
             << RESET << endl;
    }
}
Cadeau Catalogue::getCadeau(int index) { return cadeaux[index]; }
int Catalogue::nbCadeaux() { return cadeaux.size(); }
