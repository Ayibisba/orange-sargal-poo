#include <iostream>
#include <string>
#include "../include/Service.h"
#include "../include/Menu.h"
#include "../include/Utilisateur.h"
#include "../include/Catalogue.h"
#include "../include/Session.h"
using namespace std;



int main() {string codeUtilisateur;
    
    cout << "=== BIENVENUE SUR ORANGE SARGAL ===" << endl;
    cout << "Pour acceder au service, tapez #221# : ";
    cin >> codeUtilisateur;
    
    if (verifierAcces(codeUtilisateur)) {

        Utilisateur user("Client Sargal", 200);

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
                cout << "\nVos points : " << user.getPoints() << " pts\n";
            }
            else if (choix == 3) {
                cout << "Merci ! A bientot sur Orange Sargal." << endl;
            }
            else {
                cout << " Erreur : choisis 1, 2 ou 3" << endl;
            }
            
        } while(choix != 3);
    }
    
    return 0;
}
