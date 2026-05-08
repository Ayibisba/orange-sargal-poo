#include <iostream>
#include "../include/Catalogue.h"
#include "../include/Utilisateur.h" 

void gererEchange(Utilisateur &user, Catalogue &cat) {
    cat.afficherCadeaux();
    int choix;
    std::cout << "Choisissez un cadeau (0 pour annuler) : ";
    std::cin >> choix;

    if (choix > 0 && choix <= cat.nbCadeaux()) {
        Cadeau c = cat.getCadeau(choix - 1);
        
        // Vérification et mise à jour (Critères 1 & 2)
        if (user.getPoints() >= c.getCout()) {
            user.setPoints(user.getPoints() - c.getCout());
            cout << "Succes ! Cadeau : " << c.getNom() << "\n";
            cout << "Nouveau solde : " << user.getPoints() << " points.\n";
        } else {
            cout << "Points insuffisants !\n";
        }
    } else if (choix != 0) {
        cout << "Choix invalide.\n";
    }
}
