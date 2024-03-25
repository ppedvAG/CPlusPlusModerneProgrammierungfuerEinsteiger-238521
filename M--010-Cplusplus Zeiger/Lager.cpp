#include "Lager.h"
#include "Artikel.h"
#include <memory>
Lager::Lager(int anzahlArtikel) {
	for (size_t i = 0; i < anzahlArtikel; i++)
		artikel.push_back(std::make_shared<Artikel>());
}

bool Lager::verkauf(Personal& personal)
{
	int indexArtikel = rand() % artikel.size();
	bool leer = personal.verkaufen(artikel.at(indexArtikel));
	if (leer)
		artikel.erase(artikel.begin() + indexArtikel);
	return artikel.empty();
}