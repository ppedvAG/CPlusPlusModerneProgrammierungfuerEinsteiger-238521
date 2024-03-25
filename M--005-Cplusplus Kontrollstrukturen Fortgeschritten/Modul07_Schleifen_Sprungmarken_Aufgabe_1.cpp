#include <iostream>
int main()
{
    int aktion;
    do
    {
        std::cout << "####Taschenrechner - Auswahl####" << std::endl;
        std::cout << "Addition - 1" << std::endl;
        std::cout << "Subtraktion - 2" << std::endl;
        std::cout << "Multiplikation - 3" << std::endl;
        std::cout << "Division - 4" << std::endl;
        std::cout << "Ende - 0" << std::endl;
        std::cin >> aktion;

        if (aktion >= 1 && aktion <= 4)
        {
            int zahl1, zahl2;

            std::cout << "Zahl1: " << std::endl;
            std::cin >> zahl1;
            std::cout << "Zahl2: " << std::endl;
            std::cin >> zahl2;

            switch (aktion)
            {
            case 1:
                std::cout << zahl1 << "+" << zahl2 << "=" << (zahl1 + zahl2) << std::endl;
                break;
            case 2:
                std::cout << zahl1 << "-" << zahl2 << "=" << (zahl1 - zahl2) << std::endl;
                break;
            case 3:
                std::cout << zahl1 << "*" << zahl2 << "=" << (zahl1 * zahl2) << std::endl;
                break;
            case 4:
                std::cout << zahl1 << "/" << zahl2 << "=" << ((float)zahl1 / zahl2) << std::endl;
                break;
            }
        }

    } while (aktion != 0);
}