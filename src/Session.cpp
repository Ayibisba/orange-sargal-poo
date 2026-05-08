#include <iostream>
#include "../include/Catalogue.h"
#include "../include/Utilisateur.h"
#include "../include/Couleurs.h"
using namespace std;

void gererEchange(Utilisateur &user, Catalogue &cat) {
    char continuer = 'o';

    while (continuer == 'o' || continuer == 'O') {
        cout << endl;
        cout << ORANGE << BOLD << "  🎁  CATALOGUE DES CADEAUX" << RESET << endl;
        cout << GRIS << "  ─────────────────────────────────────" << RESET << endl;
        cat.afficherCadeaux();
        cout << GRIS << "  ─────────────────────────────────────" << RESET << endl;
        cout << JAUNE << "  Choisissez un cadeau (0 pour annuler) : " << RESET;

        int choix;
        cin >> choix;

        if (choix == 0) {
            cout << GRIS << "\n  Retour au menu..." << RESET << endl;
            return;
        }

        if (choix > 0 && choix <= cat.nbCadeaux()) {
            Cadeau c = cat.getCadeau(choix - 1);
            if (user.getPoints() >= c.getCout()) {
                user.setPoints(user.getPoints() - c.getCout());
                cout << VERT << BOLD << "\n  ✅ Succes ! Cadeau choisi : "
                     << c.getNom() << RESET << endl;
                cout << VERT << "  💰 Nouveau solde : "
                     << user.getPoints() << " points." << RESET << endl;
            } else {
                int manque = c.getCout() - user.getPoints();
                cout << ROUGE << BOLD << "\n  ❌ Points insuffisants !" << RESET << endl;
                cout << ROUGE << "  Il vous manque " << manque
                     << " points pour ce cadeau." << RESET << endl;
            }
        } else {
            cout << ROUGE << "\n  Choix invalide." << RESET << endl;
        }

        // Sous-menu après chaque action
        cout << endl;
        cout << GRIS << "  ─────────────────────────────────────" << RESET << endl;
        cout << JAUNE << "  Voulez-vous choisir un autre cadeau ? (o/n) : " << RESET;
        cin >> continuer;
        cout << GRIS << "  ─────────────────────────────────────" << RESET << endl;
    }

    cout << GRIS << "\n  Retour au menu principal..." << RESET << endl;
}
