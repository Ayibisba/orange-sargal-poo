#include "../include/Menu.h"
#include "../include/Couleurs.h"
#include <iostream>
using namespace std;

void afficherBanniere() {
    cout << ORANGE << BOLD;
    cout << "  ╔═══════════════════════════════════╗" << endl;
    cout << "  ║                                   ║" << endl;
    cout << "  ║       🍊  ORANGE SARGAL  🍊       ║" << endl;
    cout << "  ║       Programme de fidélité       ║" << endl;
    cout << "  ║          Composez #221#            ║" << endl;
    cout << "  ║                                   ║" << endl;
    cout << "  ╚═══════════════════════════════════╝" << endl;
    cout << RESET << endl;
}

void afficherSeparateur() {
    cout << GRIS << "  ─────────────────────────────────────" << RESET << endl;
}

void afficherMenu() {
    cout << endl;
    afficherSeparateur();
    cout << ORANGE << BOLD << "  📋  MENU PRINCIPAL" << RESET << endl;
    afficherSeparateur();
    cout << BLANC << "  1. 🎁  Choisir un cadeau" << RESET << endl;
    cout << BLANC << "  2. 💰  Voir mes points" << RESET << endl;
    cout << BLANC << "  3. 🚪  Quitter" << RESET << endl;
    afficherSeparateur();
    cout << JAUNE << "  Ton choix : " << RESET;
}

int demanderChoix() {
    int choix;
    cin >> choix;
    return choix;
}
