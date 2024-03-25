#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

bool sorter(std::pair<int, int> p1, std::pair<int, int> p2)
{
	return p1.second > p2.second;
}

int main()
{
	srand(time(0));

	int anzahl, min, max;
	std::cout << "Anzahl: ";
	std::cin >> anzahl;
	std::cout << "Minimum: ";
	std::cin >> min;
	std::cout << "Maximum: ";
	std::cin >> max;

	std::vector<int> zahlen = std::vector<int>();
	for (size_t i = 0; i < anzahl; i++)
	{
		zahlen.push_back(rand() % (max - min + 1) + min);
	}

	std::map<int, int> anzahlZahlen;
	for (int zahl : zahlen)
	{
		anzahlZahlen[zahl]++;
	}

	std::vector<std::pair<int, int>> paare;
	std::cout << "Reihenfolge ohne Sortierung" << std::endl;
	for (std::pair<int, int> paar : anzahlZahlen)
	{
		paare.push_back(paar);
		std::cout << "Anzahl: " << paar.second << " - Zahl: " << paar.first << std::endl;
	}

	std::sort(paare.begin(), paare.end(), sorter);
	std::cout << "Reihenfolge nach \"sorter\"" << std::endl;
	for (std::pair<int, int> paar : paare)
	{
		std::cout << "Anzahl: " << paar.second << " - Zahl: " << paar.first  << std::endl;
	}

	std::reverse(paare.begin(), paare.end());
	std::cout << "Reihenfolge nach \"reverse\"" << std::endl;
	for (std::pair<int, int> paar : paare)
	{
		std::cout << "Anzahl: " << paar.second << " - Zahl: " << paar.first << std::endl;
	}
}

