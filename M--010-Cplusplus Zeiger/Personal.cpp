#include "Personal.h"
#include <iostream>
#include <iomanip>
Personal::Personal(int idWert) : id(idWert), verkaufssumme(0) { }
void Personal::addSumme(float wert)
{
	verkaufssumme += wert;
}

float Personal::getSumme()
{
	return verkaufssumme;
}
bool Personal::verkaufen(std::shared_ptr<Artikel> artikel)
{
	int anzahl = rand() % artikel->getBestand() + 1;
	float summe = artikel->getPreis() * anzahl;
	artikel->removeBestand(anzahl);
	addSumme(summe);
	std::cout << "Personal " << id << " hat " << std::setw(2) << anzahl << "x Artikel" << std::left << std::setw(2) << artikel->getId() << std::right << " fuer " << std::setw(5) << summe << " verkauft" << std::endl;
	return artikel->getBestand() == 0;
}