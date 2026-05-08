#include "../include/Catalogue.h"
#include <iostream>
using namespace std;

void Catalogue::ajouterCadeau(Cadeau c) {
    cadeaux.push_back(c);
}
void Catalogue::afficherCadeaux() {
    cout << "\n--- Catalogue des cadeaux ---\n";
    for (int i = 0; i < cadeaux.size(); i++) {
        cout << i+1 << ". "
             << cadeaux[i].getNom()
             << " (" << cadeaux[i].getCout() << " points)\n";
    }
}
Cadeau Catalogue::getCadeau(int index) { return cadeaux[index]; }
int Catalogue::nbCadeaux() { return cadeaux.size(); }
