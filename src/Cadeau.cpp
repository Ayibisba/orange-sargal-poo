#include "Cadeau.h"

Cadeau::Cadeau(string n, int c) {
    nom = n;
    cout = c;
}

string Cadeau::getNom() {
    return nom;
}

int Cadeau::getCout() {
    return cout;
}