#include <vector>
#include <memory>
#include "Fahrzeug.h"
int main()
{
	srand(time(0));
	int zahl = rand();
	std::vector<std::shared_ptr<NeuerNamensraum::Fahrzeug>> fahrzeuge;
	for (size_t i = 0; i < 50; i++)
	{
		fahrzeuge.push_back(std::make_shared<NeuerNamensraum::Fahrzeug>(rand() % 120 + 1));
	}
	std::shared_ptr<NeuerNamensraum::Fahrzeug> schnellstesFahrzeug;
	for (std::shared_ptr<NeuerNamensraum::Fahrzeug> fahrzeug : fahrzeuge) {
		if (!schnellstesFahrzeug)
			schnellstesFahrzeug = fahrzeug;

		if (schnellstesFahrzeug->getSpeed() < fahrzeug->getSpeed())
			schnellstesFahrzeug = fahrzeug;
	}

	NeuerNamensraum::Fahrzeug::FahrzeugInfo(*schnellstesFahrzeug);
}


