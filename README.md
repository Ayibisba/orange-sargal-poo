# orange-sargal-poo
**Promotion 10** | **UNCHK** | **Simulation du service #221#**


## Equipe Groupe 4
- Karamokho Fanta Mady Diallo
- Néné Doucouré
- Pape Mor Gueye

## Structure du projet
orange-sargal-poo/
├── README.md ← Ce fichier (explications)
├── .gitignore ← Fichiers à ignorer (.exe, .o, ...)
├── src/ ← Tous les fichiers .cpp (code source)
├── include/ ← Tous les fichiers .h (headers)
└── docs/ ← Documentation et livrables



## 🎯 Objectif
Reproduire le service **Orange Sargal** (#221#) qui permet :
- Consulter ses points
- Choisir un cadeau
- Valider et déduire les points
  
 100% en **C++ orienté objet**.



##  Répartition des tâches (par poste)
 ### Poste 1 – Interface & Navigation (Karamokho)
- Message de bienvenue
- Vérification du #221#
- Menu principal
- Gestion des erreurs de saisie

**Fichiers :** `main.cpp`, `Menu.cpp/.h`, `Service.cpp/.h` (partiel)

---

### Poste 2 – Données & Catalogue (Fanta Mady)
- Gestion des points utilisateur
- Structure `Cadeau` (nom, coût)
- Catalogue de cadeaux
- Vérification des points suffisants

**Fichiers :** `Utilisateur.cpp/.h`, `Cadeau.cpp/.h`, `Catalogue.cpp/.h`

---

### Poste 3 – Logique métier & POO (Pape Mor)
- Validation du choix cadeau
- Déduction des points
- Mise à jour des données
- Encapsulation (getters/setters)
- Bonus (multi-session, retour arrière)

**Fichiers :** `Service.cpp/.h` (complément), `Session.cpp/.h`

---





## Comment compiler et exécuter
```bash
# Compilation
g++ -I include src/*.cpp -o orange_sargal
# Exécution
./orange_sargal
```

##Branches
main : version finale
dev : intégration des 3 postes

feature/poste1 : Interface & Navigation    | Néné Doucouré
feature/poste2 : Données & Catalogue       | Pape Mor Gueye
feature/poste3 : Logique métier            | Karamokho Fanta Mady Diallo

Règle : Chacun travaille sur SA branche → Pull Request vers dev → validation groupe → merge dans main




 Livrables attendus
 
Code compilable et fonctionnel
README à jour
Document de répartition envoyé par mail
Fichier docs/LIVRABLES.md (preuves individuelles)
