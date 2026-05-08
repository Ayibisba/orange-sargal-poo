#ifndef CADEAU_H
#define CADEAU_H

#include <string>
using namespace std;

class Cadeau {
private:
    string nom;

public:
    Cadeau(string n, int c);

    string getNom();
    int getCout();
};

#endif
