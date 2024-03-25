#ifndef FAHRZEUG_H
#define FAHRZEUG_H
#include <iostream>
#include <string>
namespace MeineKlasse {
	class Fahrzeug
	{
		static int aktuelleId;
		int id;
		int speed;

	public:
		int getSpeed();
		void setSpeed(int);
		Fahrzeug(int);
		static void FahrzeugInfo(const Fahrzeug& fahrzeug);
	};
}
#endif // !FAHRZEUG_H

