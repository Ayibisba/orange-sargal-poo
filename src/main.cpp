#include <iostream>
#include <string>

int main() {
    std::cout << "==================================" << std::endl;
    std::cout << "   Orange Sargal - Service #221   " << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << std::endl;
    std::cout << "Bienvenue dans la simulation du service Orange Sargal." << std::endl;
    std::cout << "Les fichiers source sont en cours de developpement." << std::endl;
    std::cout << std::endl;
    std::cout << "Structure du projet:" << std::endl;
    std::cout << "  src/      - Fichiers .cpp (code source)" << std::endl;
    std::cout << "  include/  - Fichiers .h (headers)" << std::endl;
    std::cout << "  docs/     - Documentation et livrables" << std::endl;
    std::cout << std::endl;
    std::cout << "Pour compiler: g++ -I include src/*.cpp -o orange_sargal" << std::endl;
    std::cout << "Pour executer: ./orange_sargal" << std::endl;
    return 0;
}
