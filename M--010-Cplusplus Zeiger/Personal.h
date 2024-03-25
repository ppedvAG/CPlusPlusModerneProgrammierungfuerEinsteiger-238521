#include <memory>
#include <iostream>
#include "Artikel.h"
#ifndef PERSONAL_H
#define PERSONAL_H
class Personal
{
	int id;
	float verkaufssumme;
public:
	Personal(int id);
	void addSumme(float wert);
	float getSumme();
	bool verkaufen(std::shared_ptr<Artikel> artikel);
};
#endif

