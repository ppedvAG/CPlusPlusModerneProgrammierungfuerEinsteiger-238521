#include "Artikel.h"
#include <cstdlib>
int Artikel::aktuelleId = 0;
float Artikel::getPreis()
{
    return preis;
}

int Artikel::getBestand()
{
    return bestand;
}
int Artikel::getId()
{
    return id;
}

void Artikel::removeBestand(int wert)
{
    bestand -= wert;
}

Artikel::Artikel()
{
    id = ++aktuelleId;
    bestand = rand() % 20 + 5;
    preis = (float)(rand() % 1000) / 100;
}