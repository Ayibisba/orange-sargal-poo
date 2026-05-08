#include <iostream>
#include <string>
#include "../include/Service.h"
#include "../include/Menu.h"
#include "../include/Utilisateur.h"
#include "../include/Catalogue.h"
#include "../include/Session.h"
#include "../include/Couleurs.h"
using namespace std;

int main() {
    string codeUtilisateur;
    string nomUtilisateur;

    afficherBanniere();

    cout << ORANGE << "  Pour acceder au service, tapez #221# : " << RESET;
    cin >> codeUtilisateur;

    if (verifierAcces(codeUtilisateur)) {
        cout << JAUNE << "\n  Comment vous appelez-vous ? " << RESET;
        cin >> nomUtilisateur;
        cout << VERT << BOLD << "\n  Bonjour " << nomUtilisateur
             << " ! Vous avez 200 points Sargal. 🎉" << RESET << endl;

        Utilisateur user(nomUtilisateur, 200);

        Catalogue cat;
        cat.ajouterCadeau(Cadeau("Pass Internet 5Go", 50));
        cat.ajouterCadeau(Cadeau("Credit Appel 2000F", 100));
        cat.ajouterCadeau(Cadeau("Smartphone", 500));

        int choix;
        do {
            afficherMenu();
            choix = demanderChoix();

            if (choix == 1) {
                gererEchange(user, cat);
            }
            else if (choix == 2) {
                cout << endl;
                afficherSeparateur();
                cout << JAUNE << BOLD << "  💰 " << user.getNom()
                     << ", vous avez " << user.getPoints()
                     << " points Sargal." << RESET << endl;
                afficherSeparateur();
            }
            else if (choix == 3) {
                cout << endl;
                afficherSeparateur();
                cout << ORANGE << BOLD << "  Merci " << user.getNom()
                     << " ! A bientot sur Orange Sargal. 🍊" << RESET << endl;
                afficherSeparateur();
            }
            else {
                cout << ROUGE << "\n  Erreur : choisis 1, 2 ou 3" << RESET << endl;
            }

        } while (choix != 3);
    } else {
        cout << ROUGE << BOLD << "\n  Acces refuse. Verifiez le code." << RESET << endl;
    }

    return 0;
}
