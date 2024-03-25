#include "Taschenrechner.h"
#include <iostream>

bool menueAuswahl()
{
	int aktion = 0;
	std::cout << "####Taschenrechner - Auswahl####" << std::endl;
	std::cout << "Addition - 1" << std::endl;
	std::cout << "Subtraktion - 2" << std::endl;
	std::cout << "Multiplikation - 3" << std::endl;
	std::cout << "Division - 4" << std::endl;
	std::cout << "Ende - 0" << std::endl;

	std::cin >> aktion;

	if (aktion == 0)
		return false;

	int zahl1 = zahlEingabe();
	int zahl2 = zahlEingabe();

	switch (aktion)
	{
	case 1:
		addition(zahl1, zahl2);
		break;
	case 2:
		subtraktion(zahl1, zahl2);
		break;
	case 3:
		multiplikation(zahl1, zahl2);
		break;
	case 4:
		division(zahl1, zahl2);
		break;
	}

	return true;
}

int zahlEingabe() {
	std::cout << " Gib eine Zahl ein: " << std::endl;
	int zahl = 0;
	std::cin >> zahl;
	return zahl;
}

void addition(int zahl1, int zahl2) {
	std::cout << zahl1 << "+" << zahl2 << "=" << (zahl1 + zahl2) << std::endl;
}

void subtraktion(int zahl1, int zahl2) {
	std::cout << zahl1 << "-" << zahl2 << "=" << (zahl1 - zahl2) << std::endl;
}

void multiplikation(int zahl1, int zahl2) {
	std::cout << zahl1 << "*" << zahl2 << "=" << (zahl1 * zahl2) << std::endl;
}

void division(int zahl1, int zahl2) {
	std::cout << zahl1 << "/" << zahl2 << "=" << (zahl1 / zahl2) << std::endl;
}