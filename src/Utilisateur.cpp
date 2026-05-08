#include "../include/Utilisateur.h"

Utilisateur::Utilisateur(string n, int p) {
    nom = n;
    points = p;
}

string Utilisateur::getNom() {
    return nom;
}

int Utilisateur::getPoints() {
    return points;
}

void Utilisateur::setPoints(int p) { points = p; }

void Utilisateur::ajouterPoints(int p) {
    points += p;
}

bool Utilisateur::utiliserPoints(int p) {
    if(points >= p) {
        points -= p;
        return true;
    }
    return false;
}
