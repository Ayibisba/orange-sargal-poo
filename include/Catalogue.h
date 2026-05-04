#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <vector>
#include "Cadeau.h"
using namespace std;

class Catalogue {
private:
    vector<Cadeau> cadeaux;

public:
    void ajouterCadeau(Cadeau c);
    void afficherCadeaux();
    Cadeau getCadeau(int index);
};

#endif