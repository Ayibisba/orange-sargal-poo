#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <vector>
#include <string>

struct Cadeau {
    std::string nom;
    int prixPoints;
};

class Catalogue {
private:
    std::vector<Cadeau> listeCadeaux;

public:
    Catalogue(); 
    void afficherCatalogue();
    Cadeau getCadeau(int index);
    int nbCadeaux();
};

#endif