#include <iostream>
#include <vector>   
#include <random>
#include <conio.h> // Para _getch()

int main() {
    std::vector<std::string> opciones = {
        "Akshan + Pyke",
        "Ashe + Mundo",
        "Chino + Pantheon",
        "Darius + Sett",
        "Graves + Teemo",
        "Kaisa + Cartitas",
        "Maokai + Teemo",
        "Nautilus + Leona",
        "Nocturne + Cartitas",
        "Olaf + Mundo",
        "Seraphine + Sona",
        "Tahm + Yasuo",
        "Tahm + Zac",
        "Talon + Zed",
        "Tresh + Blitz",
        "Urgot + Singed",
        "Varus + Ashe",
        "Vexx + Neeko",
        "Xerath + Lux"
    };

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, opciones.size() - 1);

    char tecla;
    do {
        int indice_aleatorio = dis(gen);
        std::string resultado = opciones[indice_aleatorio];

        system("cls");
        std::cout << resultado << std::endl << std::endl;
        std::cout << "Si no te atreves con este wombo, pulsa Enter para generar un nuevo resultado, o Escape para salir." << std::endl;

        tecla = _getch();
    } while (tecla != 27); // Escape para salir

    return 0;
}
