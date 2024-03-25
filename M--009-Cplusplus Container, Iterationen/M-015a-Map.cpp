#include <iostream>
#include <map>
#include <string>

void schuelerHinzufuegen(std::map<std::string, int>& schueler) {
    std::string name;
    int alter;
    std::cout << "Name des Schülers: ";
    std::cin >> name;
    std::cout << "Alter des Schülers: ";
    std::cin >> alter;
    // Fügen Sie den Schüler zur Map hinzu
    schueler[name] = alter;
}

void schuelerEntfernen(std::map<std::string, int>& schueler) {
    std::string name;
    std::cout << "Name des zu entfernenden Schülers: ";
    std::cin >> name;
    // Entfernen Sie den Schüler aus der Map
    auto it = schueler.find(name);
    if (it != schueler.end()) {
        schueler.erase(it);
        std::cout << name << " wurde aus der Liste entfernt." << std::endl;
    }
    else {
        std::cout << name << " wurde nicht gefunden." << std::endl;
    }
}

void alleSchuelerAnzeigen(const std::map<std::string, int>& schueler) {
    // Zeigen Sie alle Schüler und ihre Altersdaten an
    std::cout << "Alle Schüler: " << std::endl;
    for (const auto& pair : schueler) {
        std::cout << "Name: " << pair.first << ", Alter: " << pair.second << std::endl;
    }
}

int main() {
    std::map<std::string, int> schueler;

    int anzahl;
    std::cout << "Anzahl der Schüler: ";
    std::cin >> anzahl;

    for (int i = 0; i < anzahl; ++i) {
        schuelerHinzufuegen(schueler);
    }

    char choice;
    do {
        std::cout << "Menü:" << std::endl;
        std::cout << "1. Schüler hinzufügen" << std::endl;
        std::cout << "2. Schüler entfernen" << std::endl;
        std::cout << "3. Alle Schüler anzeigen" << std::endl;
        std::cout << "4. Beenden" << std::endl;
        std::cout << "Wählen Sie eine Option: ";
        std::cin >> choice;

        switch (choice) {
        case '1':
            schuelerHinzufuegen(schueler);
            break;
        case '2':
            schuelerEntfernen(schueler);
            break;
        case '3':
            alleSchuelerAnzeigen(schueler);
            break;
        case '4':
            std::cout << "Programm beendet." << std::endl;
            break;
        default:
            std::cout << "Ungültige Option." << std::endl;
        }
    } while (choice != '4');

    return 0;
}
