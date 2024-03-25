#include <iostream>
#include <map>
#include <string>

void schuelerHinzufuegen(std::map<std::string, int>& schueler) {
    std::string name;
    int alter;
    std::cout << "Name des Sch�lers: ";
    std::cin >> name;
    std::cout << "Alter des Sch�lers: ";
    std::cin >> alter;
    // F�gen Sie den Sch�ler zur Map hinzu
    schueler[name] = alter;
}

void schuelerEntfernen(std::map<std::string, int>& schueler) {
    std::string name;
    std::cout << "Name des zu entfernenden Sch�lers: ";
    std::cin >> name;
    // Entfernen Sie den Sch�ler aus der Map
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
    // Zeigen Sie alle Sch�ler und ihre Altersdaten an
    std::cout << "Alle Sch�ler: " << std::endl;
    for (const auto& pair : schueler) {
        std::cout << "Name: " << pair.first << ", Alter: " << pair.second << std::endl;
    }
}

int main() {
    std::map<std::string, int> schueler;

    int anzahl;
    std::cout << "Anzahl der Sch�ler: ";
    std::cin >> anzahl;

    for (int i = 0; i < anzahl; ++i) {
        schuelerHinzufuegen(schueler);
    }

    char choice;
    do {
        std::cout << "Men�:" << std::endl;
        std::cout << "1. Sch�ler hinzuf�gen" << std::endl;
        std::cout << "2. Sch�ler entfernen" << std::endl;
        std::cout << "3. Alle Sch�ler anzeigen" << std::endl;
        std::cout << "4. Beenden" << std::endl;
        std::cout << "W�hlen Sie eine Option: ";
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
            std::cout << "Ung�ltige Option." << std::endl;
        }
    } while (choice != '4');

    return 0;
}
