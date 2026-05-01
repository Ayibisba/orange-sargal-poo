# Orange Sargal POO

## Project Overview
A C++ object-oriented programming simulation of the **Orange Sargal** service (#221#). The service allows users to:
- View their points
- Choose a gift
- Validate and deduct points

This is a group project (Promotion 10, UNCHK, Groupe 4).

## Team
- Karamokho Fanta Mady Diallo (Poste 3 - Business Logic & OOP)
- Néné Doucouré (Poste 1 - Interface & Navigation)
- Pape Mor Gueye (Poste 2 - Data & Catalogue)

## Project Structure
```
orange-sargal-poo/
├── README.md         ← Project documentation
├── .gitignore
├── src/              ← All .cpp source files
│   └── main.cpp      ← Entry point
├── include/          ← All .h header files
└── docs/             ← Documentation and deliverables
```

## Build & Run
```bash
# Compile
g++ -I include src/*.cpp -o orange_sargal

# Run
./orange_sargal
```

## Workflow
The "Start application" workflow compiles and runs the project automatically:
```
g++ -I include src/*.cpp -o orange_sargal && ./orange_sargal
```

## Planned Source Files
- `main.cpp` - Entry point
- `Menu.cpp/.h` - Main menu
- `Service.cpp/.h` - Service logic
- `Utilisateur.cpp/.h` - User data and points
- `Cadeau.cpp/.h` - Gift structure
- `Catalogue.cpp/.h` - Gift catalogue
- `Session.cpp/.h` - Session management

## Branch Strategy
- `main` - Final version
- `dev` - Integration branch
- `feature/poste1` - Interface & Navigation (Néné)
- `feature/poste2` - Data & Catalogue (Pape Mor)
- `feature/poste3` - Business Logic (Kara)
