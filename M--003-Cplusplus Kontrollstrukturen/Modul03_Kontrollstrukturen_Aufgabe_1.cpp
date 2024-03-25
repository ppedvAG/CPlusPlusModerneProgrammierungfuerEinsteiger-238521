#include <iostream>
int main()
{
	int menge; 
	std::cout << "Wie viel wurde gekauft: " << std::flush; 
	std::cin >> menge;

	float preis = 0;
	if (menge > 599)
		preis = 1.2;
	else if (menge > 399)
		preis = 1.5;
	else if (menge > 199)
		preis = 1.8;
	else if (menge > 0)
		preis = 2;
	
	std::cout << "Einzelpreis: " << preis << std::endl;
	std::cout << "Gesamtpreis: " << (preis * menge) << std::endl;
}