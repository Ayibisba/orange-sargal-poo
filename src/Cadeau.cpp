#include "../include/Cadeau.h"

Cadeau::Cadeau(string n, int c) {
    nom = n;
    coutPoints = c;
}

string Cadeau::getNom() {
    return nom;
}

int Cadeau::getCout() {
    return coutPoints;
}
