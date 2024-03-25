#include <iostream>
#include <string>
#include <iomanip>


int main()
{
	std::string name;
	std::string ersteBuchung;
	std::string zweiteBuchung;
	std::string dritteBuchung;
	std::string vierteBuchung;

	int kontostand;
	int ersteBuchungPreis;
	int zweiteBuchungPreis;
	int dritteBuchungPreis;
	int vierteBuchungPreis;

	std::cout << "Vor- und Nachname: " << std::flush;
	std::getline(std::cin, name);
	std::cout << "Kontostand: " << std::flush;
	std::cin >> kontostand;
	std::cin.ignore(); 
	std::cout << "Buchungen:" << std::endl;
	std::cout << "erste Buchung: " << std::flush;
	std::getline(std::cin, ersteBuchung);
	std::cout << "erste Buchung Preis: " << std::flush;
	std::cin >> ersteBuchungPreis;
	std::cin.ignore();
	std::cout << "zweite Buchung: " << std::flush;
	std::getline(std::cin, zweiteBuchung);
	std::cout << "zweite Buchung Preis: " << std::flush;
	std::cin >> zweiteBuchungPreis;
	std::cin.ignore();
	std::cout << "dritte Buchung: " << std::flush;
	std::getline(std::cin, dritteBuchung);
	std::cout << "dritte Buchung Preis: " << std::flush;
	std::cin >> dritteBuchungPreis;
	std::cin.ignore();
	std::cout << "vierte Buchung: " << std::flush;
	std::getline(std::cin, vierteBuchung);
	std::cout << "vierte Buchung Preis: " << std::flush;
	std::cin >> vierteBuchungPreis;
	std::cin.ignore();


	std::cout << std::right << std::internal << std::showpos;

	std::cout << "\n\nKontoauszug:" << std::endl;
	std::cout << std::setw(20) << "Name: " << name << std::endl;
	std::cout << std::setw(20) << "Kontostand: " << kontostand << std::endl;
	std::cout << "\nBuchungen: " << std::endl;
	std::cout << std::setw(20) << (ersteBuchung  + ": ") << std::setw(6) << ersteBuchungPreis  << std::endl;
	std::cout << std::setw(20) << (zweiteBuchung + ": ") << std::setw(6) << zweiteBuchungPreis << std::endl;
	std::cout << std::setw(20) << (dritteBuchung + ": ") << std::setw(6) << dritteBuchungPreis << std::endl;
	std::cout << std::setw(20) << (vierteBuchung + ": ") << std::setw(6) << vierteBuchungPreis << std::endl;

	int neuerKontostand = kontostand + ersteBuchungPreis + zweiteBuchungPreis + dritteBuchungPreis + vierteBuchungPreis;
	std::cout << std::setw(20) << "neuer Kontostand: " << neuerKontostand << std::endl;
}