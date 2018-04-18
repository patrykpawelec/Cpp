//http://cpp0x.pl/kursy/Kurs-C++/Poziom-1/Operacje-matematyczne/13
#include <iostream>
int main()
{
    /*
    double liczba = 123.3;
    std::cout << "liczba = " << liczba << std::endl;
    liczba = liczba + 6.7;
    std::cout << "liczba = " << liczba << std::endl;
    liczba -= 30;
    std::cout << "liczba = " << liczba << std::endl;
    liczba /= 11;
    std::cout << "liczba = " << liczba << std::endl;
    liczba *= 3;
    std::cout << "liczba = " << liczba << std::endl;
    int nowa = liczba;
    std::cout << "nowa = " << nowa << std::endl;
    nowa %= 8;
    std::cout << "nowa = " << nowa << std::endl;
    nowa++;
    std::cout << "nowa = " << nowa << std::endl;
    ++nowa;
    std::cout << "nowa = " << nowa << std::endl;
    nowa *= 10;
    std::cout << "nowa = " << nowa << std::endl;
    --nowa;
    std::cout << "nowa = " << nowa << std::endl;
    nowa--;
    std::cout << "nowa = " << nowa << std::endl;
    */
    int a,b;
    std::cout << "Podaj liczbe a: ";
    std::cin >> a;
    std::cout << "Podaj liczbe b: ";
    std::cin >> b;
    std::cout << "a + b = " << a+b << std::endl;
    std::cout << "a - b = " << a-b << std::endl;
    std::cout << "a * b = " << a*b << std::endl;
    std::cout << "a / b = " << a/b << std::endl;
    std::cout << "a % b = " << a%b << std::endl;
    float c,d;
    std::cout << "Podaj liczbe a: ";
    std::cin >> c;
    std::cout << "Podaj liczbe b: ";
    std::cin >> d;
    std::cout << "a + b = " << c+d << std::endl;
    std::cout << "a - b = " << c-d << std::endl;
    std::cout << "a * b = " << c*d << std::endl;
    std::cout << "a / b = " << c/d << std::endl;
    return 0;
}
