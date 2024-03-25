#include <iostream>
#include <vector>

int main() {
    // Variablendeklaration
    int anzahl;
    std::vector<int> zahlen;
    int summe = 0;

    // Benutzer nach der Anzahl der Zahlen fragen
    std::cout << "Bitte geben Sie die Anzahl der Zahlen ein: ";
    std::cin >> anzahl;

    // Zahlen vom Benutzer einlesen und in den Vektor speichern
    for (int i = 0; i < anzahl; ++i) {
        int zahl;
        std::cout << "Bitte geben Sie die Zahl " << i + 1 << " ein: ";
        std::cin >> zahl;
        zahlen.push_back(zahl);
        summe += zahl;
    }

    // Eingegebene Zahlen ausgeben
    std::cout << "\nEingegebene Zahlen:";
    for (int zahl : zahlen) {
        std::cout << " " << zahl;
    }

    // Summe berechnen und ausgeben
    std::cout << "\nSumme: " << summe;

    // Durchschnitt berechnen und ausgeben
    if (anzahl > 0) {
        double durchschnitt = static_cast<double>(summe) / anzahl;
        std::cout << "\nDurchschnitt: " << durchschnitt;
    }
    else {
        std::cout << "\nFehler: Keine Zahlen eingegeben.";
    }

    return 0;
}