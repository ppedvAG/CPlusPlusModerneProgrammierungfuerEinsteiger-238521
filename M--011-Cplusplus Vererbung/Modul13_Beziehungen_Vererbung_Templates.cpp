#include <iostream>
#include <vector>
#include "Formen.h"

int main()
{
	srand(time(0));

	int anzahl = 0;
	std::cout << "Anzahl Formen: ";
	std::cin >> anzahl;

	std::vector<std::shared_ptr<Form>> formen;

	for (size_t i = 0; i < anzahl; i++)
	{
		int auswahl = rand() % 3 + 1;
		float x = (float)(rand() % 100) / 10.0f + 1;
		switch (auswahl)
		{
		case 1:
			formen.push_back(std::make_shared<Kreis>(x));
			break;
		case 2:
			formen.push_back(std::make_shared<Kugel>(x));
			break;
		case 3:
			float y = (float)(rand() % 100) / 10.0f + 1;
			formen.push_back(std::make_shared<Zylinder>(x, y));
			break;
		}
	}

	for (std::shared_ptr<Form> form : formen)
	{
		std::cout << form->Flaeche() << " "; 

		Kreis* kreis = dynamic_cast<Kreis*>(form.get());
		if (kreis)
		{
			kreis->KreisMethode();
			continue;
		}

		Kugel* kugel = dynamic_cast<Kugel*>(form.get());
		if (kugel)
		{
			kugel->KugelMethode();
			continue;
		}

		Zylinder* zylinder = dynamic_cast<Zylinder*>(form.get());
		if (zylinder)
		{
			zylinder->ZylinderMethode();
			continue;
		}
	}
}