#ifndef LAGER_H
#define LAGER_H
#include <vector>
#include <memory>
#include "Artikel.h"
#include "Personal.h"
class Lager
{
	std::vector<std::shared_ptr<Artikel>> artikel;
public:
	Lager(int anzahlArtikel);
	bool verkauf(Personal& personal);
};
#endif