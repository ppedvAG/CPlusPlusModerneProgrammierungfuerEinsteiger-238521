#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Für die Verwendung von std::find

class Student {
private:
    std::string name;
    int matrikelnummer;
    std::vector<std::string> kursverlauf;

public:
    // Konstruktor
    Student(std::string n, int m) : name(n), matrikelnummer(m) {}

    // Methoden
    void kursHinzufuegen(std::string kurs) {
        kursverlauf.push_back(kurs);
    }

    void kursEntfernen(std::string kurs) {
        auto it = std::find(kursverlauf.begin(), kursverlauf.end(), kurs);
        if (it != kursverlauf.end()) {
            kursverlauf.erase(it);
        }
    }

    void kursverlaufAnzeigen() {
        std::cout << "Kursverlauf von " << name << " (Matrikelnummer: " << matrikelnummer << "):" << std::endl;
        for (const std::string& kurs : kursverlauf) {
            std::cout << "- " << kurs << std::endl;
        }
        std::cout << std::endl;
    }
};

class Studentenverwaltungssystem {
private:
    std::vector<Student> studenten;

public:
    // Methoden
    void studentHinzufuegen(const Student& student) {
        studenten.push_back(student);
    }

    void studentEntfernen(int matrikelnummer) {
        auto it = std::find_if(studenten.begin(), studenten.end(), [matrikelnummer](const Student& s) {
            return s.matrikelnummer == matrikelnummer;
            });
        if (it != studenten.end()) {
            studenten.erase(it);
        }
    }

    void alleStudentenAnzeigen() {
        std::cout << "Alle Studenten im System:" << std::endl;
        for (const Student& student : studenten) {
            student.kursverlaufAnzeigen();
        }
    }
};

int main() {
    Studentenverwaltungssystem system;

    char choice;
    do {
        std::cout << "Menü:" << std::endl;
        std::cout << "1. Student hinzufügen" << std::endl;
        std::cout << "2. Student entfernen" << std::endl;
        std::cout << "3. Alle Studenten anzeigen" << std::endl;
        std::cout << "4. Beenden" << std::endl;
        std::cout << "Wählen Sie eine Option: ";
        std::cin >> choice;

        switch (choice) {
        case '1': {
            std::string name;
            int matrikelnummer;
            std::cout << "Name des Studenten eingeben: ";
            std::cin >> name;
            std::cout << "Matrikelnummer eingeben: ";
            std::cin >> matrikelnummer;
            Student student(name, matrikelnummer);
            student.kursHinzufuegen("Mathematik");
            student.kursverlaufAnzeigen();
            system.studentHinzufuegen(student);
            break;
        }
        case '2': {
            int matrikelnummer;
            std::cout << "Matrikelnummer des zu entfernenden Studenten eingeben: ";
            std::cin >> matrikelnummer;
            system.studentEntfernen(matrikelnummer);
            break;
        }
        case '3':
            system.alleStudentenAnzeigen();
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