#include "Formen.h"
#include <iostream>
const float Form::pi = 3.1419;

Form::Form(float x, float y) : x(x), y(y) { }


Kreis::Kreis(float radius) : Form::Form(radius, 0) { }
float Kreis::Flaeche() {
	return pi * x * x;
}
void Kreis::KreisMethode()
{
	std::cout << "Hallo Kreis!" << std::endl;
}


Kugel::Kugel(float r) : Form(r, 0) { }
float Kugel::Flaeche() {
	return 4 * pi * x * x;
}
void Kugel::KugelMethode()
{
	std::cout << "Hey Kugel!" << std::endl;
}


Zylinder::Zylinder(float r, float h) : Form(r, h) { }
float Zylinder::Flaeche() {
	return 4 * pi * x * x;
}
void Zylinder::ZylinderMethode()
{
	std::cout << "Moin Zylinder!" << std::endl;
}
