#include "../include/Catalogue.h"
#include <iostream>

Catalogue::Catalogue() {
    listeCadeaux.push_back({"Pass Internet 5Go", 50});
    listeCadeaux.push_back({"Crédit Appel 2000F", 100});
    listeCadeaux.push_back({"Smartphone", 5000});
}

void Catalogue::afficherCatalogue() {
    std::cout << "\n--- CATALOGUE DES CADEAUX ---\n";
    for (int i = 0; i < listeCadeaux.size(); i++) {
        std::cout << i + 1 << ". " << listeCadeaux[i].nom 
         << " (" << listeCadeaux[i].prixPoints << " points)\n";
    }
}

int Catalogue::nbCadeaux() { return listeCadeaux.size(); }
Cadeau Catalogue::getCadeau(int index) { return listeCadeaux[index]; }