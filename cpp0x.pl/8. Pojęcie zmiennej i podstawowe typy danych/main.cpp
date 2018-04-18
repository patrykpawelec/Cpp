#include <iostream>
#include <cstdio>
int main()
{
    std::cout << "sizeof(bool) = " << sizeof( bool ) << std::endl;
    std::cout << "sizeof(char) = " << sizeof( char ) << std::endl;
    std::cout << "sizeof(unsigned char) = " << sizeof( unsigned char ) << std::endl;
    std::cout << "sizeof(wchar_t) = " << sizeof( wchar_t ) << std::endl;
    std::cout << "sizeof(short) = " << sizeof( short ) << std::endl;
    std::cout << "sizeof(unsigned short) = " << sizeof( unsigned short ) << std::endl;
    std::cout << "sizeof(int) = " << sizeof( int ) << std::endl;
    std::cout << "sizeof(unsigned int) = " << sizeof( unsigned int ) << std::endl;
    std::cout << "sizeof(long) = " << sizeof( long ) << std::endl;
    std::cout << "sizeof(unsigned long) = " << sizeof( unsigned long ) << std::endl;
    std::cout << "sizeof(long long) = " << sizeof( long long ) << std::endl;
    std::cout << "sizeof(float) = " << sizeof( float ) << std::endl;
    std::cout << "sizeof(double) = " << sizeof( double ) << std::endl;
    std::cout << "sizeof(long double) = " << sizeof( long double ) << std::endl;
    int to_jest_zmienna;
    unsigned int tylkoDodatnie;

    float zmiennoprzecinkowa;

    char jeden_znak;
    unsigned char rowniez_znak;

    int abc = - 53;

    tylkoDodatnie = 22;
    zmiennoprzecinkowa = 12.42;
    rowniez_znak = 'c';

    std::cout << "Wypisujemy zmienne:" << std::endl;
    std::cout << "  to_jest_zmienna = " << to_jest_zmienna << std::endl;
    std::cout << "  tylkoDodatnie = " << tylkoDodatnie << std::endl;
    std::cout << "  abc = " << abc << std::endl;
    std::cout << "  zmiennoprzecinkowa = " << zmiennoprzecinkowa << std::endl;
    std::cout << "  jeden_znak = " << jeden_znak << std::endl;
    std::cout << "  rowniez_znak = " << rowniez_znak << std::endl;
    return 0;
}
