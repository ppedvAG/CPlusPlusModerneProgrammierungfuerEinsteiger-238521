#include <iostream>
int main()
{
	srand(time(0)); 

	int lotto1 = 0;
	int lotto2 = 0;
	int lotto3 = 0;

	lotto1 = rand() % 9 + 1;
	do
	{
		lotto2 = rand() % 9 + 1;
	} while (lotto2 == lotto1);
	do
	{
		lotto3 = rand() % 9 + 1;
	} while (lotto3 == lotto2 || lotto3 == lotto1);

	int zahl1 = 0;
	int zahl2 = 0;
	int zahl3 = 0;

	std::cout << "1. Zahl: " << std::endl;
	std::cin >> zahl1;
	do
	{
		std::cout << "2. Zahl: " << std::endl;
		std::cin >> zahl2;
	} while (zahl2 == zahl1);
	do
	{
		std::cout << "3. Zahl: " << std::endl;
		std::cin >> zahl3;
	} while (zahl3 == zahl2 || zahl3 == zahl1);

	int richtigeZahlen = 0;
	if (zahl1 == lotto1 || zahl1 == lotto2 || zahl1 == lotto3)
		++richtigeZahlen;
	if (zahl2 == lotto1 || zahl2 == lotto2 || zahl2 == lotto3)
		++richtigeZahlen;
	if (zahl3 == lotto1 || zahl3 == lotto2 || zahl3 == lotto3)
		++richtigeZahlen;

	std::cout << "1. Gewinnzahl:  " << lotto1 << std::endl;
	std::cout << "2. Gewinnzahl:  " << lotto2 << std::endl;
	std::cout << "3. Gewinnzahl:  " << lotto3 << std::endl;
	std::cout << "Anzahl richtig: " << richtigeZahlen;
}
