#include "Fahrzeug.h"
#include <iostream>
#include <string>
namespace MeineKlasse {
	int Fahrzeug::aktuelleId = 0;
	
	int Fahrzeug::getSpeed() {
		return speed;
	}
	void Fahrzeug::setSpeed(int wert)
	{
		speed = wert;
	}
	Fahrzeug::Fahrzeug(int speedWert) : speed(speedWert) { id = ++aktuelleId; }

	void Fahrzeug::FahrzeugInfo(const Fahrzeug& fahrzeug)
	{
		std::cout << "++ Fahrzeug Info ++" << std::endl;
		std::cout << "Id    : " << fahrzeug.id << std::endl;
		std::cout << "Speed : " << fahrzeug.speed << std::endl;
	}
}