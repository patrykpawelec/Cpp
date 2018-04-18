//http://cpp0x.pl/kursy/Kurs-C++/Poziom-1/Obsluga-strumienia-wejsciowego/12
#include <iostream>
int main()
{
    float a,b,c;
    std::cout << "Podaj liczbe rzeczywista: ";
    std::cin >> a;
    //std::cout << "Wczytano? " << std::cin.good() << std::endl;
    //std::cout << "Czy cos nawalilo? " << std::cin.fail() << std::endl;
    bool aCzySukces = std::cin.good();
    std::cin.clear();
    std::cin.sync();
    std::cout << "Podaj liczbe rzeczywista: ";
    std::cin >> b;
    //std::cout << "Wczytano? " << std::cin.good() << std::endl;
    //std::cout << "Czy cos nawalilo? " << std::cin.fail() << std::endl;
    bool bCzySukces = std::cin.good();
    std::cin.clear();
    std::cin.sync();
    std::cout << "Podaj liczbe rzeczywista: ";
    std::cin >> c;
    //std::cout << "Wczytano? " << std::cin.good() << std::endl;
    //std::cout << "Czy cos nawalilo? " << std::cin.fail() << std::endl;
    bool cCzySukces = std::cin.good();
    std::cin.clear();
    std::cin.sync();
    std::cout << "Liczba a = " << a << "\tWczytano? " << aCzySukces << std::endl;
    std::cout << "Liczba b = " << b << "\tWczytano? " << bCzySukces << std::endl;
    std::cout << "Liczba c = " << c << "\tWczytano? " << cCzySukces << std::endl;
    //std::cout << "bool: " << aCzySukces << bCzySukces;
    return 0;
}
