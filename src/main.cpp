#include <iostream>
#include <string>
using namespace std;


bool verifierAccess(string saisie);
void afficherMenu();
int demanderChoix();


int main() {string codeUtilisateur;
    
    cout << "=== BIENVENUE SUR ORANGE SARGAL ===" << endl;
    cout << "Pour acceder au service, tapez #221# : ";
    cin >> codeUtilisateur;
    
    if (verifierAcces(codeUtilisateur)) {
        int choix;
        do {
            afficherMenu();
            choix = demanderChoix();
            
            if (choix == 1) {
                cout << "Tu pourras choisir un cadeau ici" << endl;
            } 
            else if (choix == 2) {
                cout << " Tu pourras voir tes points ici" << endl;
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