#include "Lager.h"
#include "Personal.h"
#include <iostream>
int main()
{
	srand(time(0));

	Lager lager = Lager(9);

	Personal personal1 = Personal(1);
	Personal personal2 = Personal(2);
	Personal personal3 = Personal(3);

	bool lagerLeer = false;
	do
	{
		int verkaeufer = rand() % 3 + 1;
		switch (verkaeufer)
		{
		case 1:
			lagerLeer = lager.verkauf(personal1);
			break;
		case 2:
			lagerLeer = lager.verkauf(personal2);
			break;
		case 3:
			lagerLeer = lager.verkauf(personal3);
			break;
		}

	} while (!lagerLeer);

	std::cout << "1 - " << personal1.getSumme() << std::endl;
	std::cout << "2 - " << personal2.getSumme() << std::endl;
	std::cout << "3 - " << personal3.getSumme() << std::endl;
}