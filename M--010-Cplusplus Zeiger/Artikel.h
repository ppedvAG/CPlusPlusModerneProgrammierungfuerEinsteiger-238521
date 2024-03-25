#ifndef ARTIKEL_H
#define ARTIKEL_H
class Artikel
{
	static int aktuelleId;
	int id; 
	int bestand;
	float preis; 
public:
	float getPreis();
	int getId();
	int getBestand(); 
	void removeBestand(int anzahl);
	Artikel(); 
};
#endif
