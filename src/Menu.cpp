#include "../include/Menu.h"
#include <iostream>
using namespace std;


void afficherMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Choisir un cadeau" << endl;
    cout << "2. Voir mes points" << endl;
    cout << "3. Quitter" << endl;
    cout << "Ton choix : ";
}

int demanderChoix() {
    int choix;
    cin >> choix;
    return choix;
}