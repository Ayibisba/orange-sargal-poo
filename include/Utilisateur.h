#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>
using namespace std;

class Utilisateur {
private:
    string nom;
    int points;

public:
    Utilisateur(string n, int p);

    string getNom();
    int getPoints();
    void setPoints(int p);
    void ajouterPoints(int p);
    bool utiliserPoints(int p);
};

#endif
