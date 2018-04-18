//http://cpp0x.pl/kursy/Kurs-C++/Poziom-1/Operacje-logiczne/15
#include <iostream>
int main()
{
    bool wynik = true;
    std::cout << "wynik = " << wynik << std::endl;
    std::cout << "wynik = " <<!wynik << std::endl;
    std::cout << "wynik = " <<!!wynik << std::endl;
    wynik = !wynik;
    std::cout << "wynik = " << wynik << std::endl;
    wynik = !( 123 > 345 );
    std::cout << "wynik = " << wynik << std::endl;

    wynik = false || false;
    std::cout << "wynik (false || false) = " << wynik << std::endl;
    wynik = false || true;
    std::cout << "wynik (false || true) = " << wynik << std::endl;
    wynik = true || true;
    std::cout << "wynik (true || true) = " << wynik << std::endl;
    bool a = false;
    bool b = false;
    wynik = a || b || true;
    std::cout << "wynik (a || b || true) = " << wynik << std::endl;
    bool c = false;
    std::cout << "(a||b||c) = " <<( a || b || c ) << std::endl;
    b = true;
    std::cout << "(a||b||c) = " <<( a || b || c ) << std::endl;
    std::cout << "(a|| !b ||c) = " <<( a || !b || c ) << std::endl;

    wynik = false && false;
    std::cout << "wynik (false && false) = " << wynik << std::endl;
    wynik = false && true;
    std::cout << "wynik (false && true) = " << wynik << std::endl;
    wynik = true && true;
    std::cout << "wynik (true && true) = " << wynik << std::endl;
    a = false;
    b = false;
    wynik = a && b && true;
    std::cout << "wynik (a && b && true) = " << wynik << std::endl;
    c = false;
    std::cout << "(a&&b&&c) = " <<( a && b && c ) << std::endl;
    b = true;
    std::cout << "(a&&b&&c) = " <<( a && b && c ) << std::endl;
    std::cout << "(a&& !b &&c) = " <<( a && !b && c ) << std::endl;
    std::cout << "(!a && b && !c) = " <<( !a && b &&!c ) << std::endl;

    wynik = true && false || !true && false || !( !true && false );
    std::cout << "true && false || !true && false || !( !true && false ) = " << wynik << std::endl;
    std::cout << "Kolejnosc dzialan logicznych: nawias (), iloczyn logiczny &&, suma logiczna ||";
    return 0;
}
