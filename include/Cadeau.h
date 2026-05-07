#ifndef CADEAU_H
#define CADEAU_H

#include <string>
using namespace std;

class Cadeau {
private:
    string nom;
    int coutPoints; // renommé (cout était en conflit avec std::cout)

public:
    Cadeau(string n, int c);

    string getNom();
    int getCout();
};

#endif
