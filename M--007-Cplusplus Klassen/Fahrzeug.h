#ifndef FAHRZEUG_H
#define FAHRZEUG_H
#include <string>
namespace NeuerNamensraum {
    class Fahrzeug
    {
        std::string marke;
        std::string modell;
        int baujahr;

    public:
        std::string getMarke();
        void setMarke(std::string);
        std::string getModell();
        void setModell(std::string);
        int getBaujahr();
        void setBaujahr(int);

        Fahrzeug(std::string, std::string, int);
        Fahrzeug(std::string, std::string);
        Fahrzeug(std::string);

        static void FahrzeugInfo(const Fahrzeug& fahrzeug); 
    };
}
#endif // !FAHRZEUG_H
