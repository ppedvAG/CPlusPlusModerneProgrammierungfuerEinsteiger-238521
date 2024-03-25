#include <iostream>
int main()
{
	int stunden, minuten, sekunden, entfernung;
	int dauer;

	std::cout << "Stunden: " << std::endl;
	std::cin >> stunden;

	std::cout << "Minuten: " << std::endl;
	std::cin >> minuten;

	std::cout << "Sekunden : " << std::endl;
	std::cin >> sekunden;

	std::cout << "Entfernung(km): " << std::endl;
	std::cin >> entfernung;

	dauer = stunden * 3600 + minuten * 60 + sekunden;

	float mps = (float)(entfernung * 1000) / dauer;
	float kmh = (float)entfernung / ((float)dauer / 3600);
	float mph = (float)entfernung * 0.6214 / ((float)dauer / 3600);

	std::cout << "Meter pro Sekunde:    " << mps << std::endl;
	std::cout << "Kilometer pro Stunde: " << kmh << std::endl;
	std::cout << "Meilen pro Stunde:    " << mph << std::endl;
}