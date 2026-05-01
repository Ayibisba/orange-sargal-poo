#include "Service.h"
#include <iostream>
using namespace std;


bool verifierAcces(string saisie) {
    if (saisie == "#221#") {
        cout << " Acces autorise !" << endl;
        return true;
    } else {
        cout << " Code incorrect. Acces refuse." << endl;
        return false;
    }
}