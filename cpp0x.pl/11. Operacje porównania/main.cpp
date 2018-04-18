//http://cpp0x.pl/kursy/Kurs-C++/Poziom-1/Operacje-porownania/14
#include <iostream>

int main() {
	int zmienna = 5;
	bool popatrzNaTo = 10 * 4 + zmienna / 2 <= zmienna * 8;
	std::cout << "popatrzNaTo = " << popatrzNaTo << std::endl;
	bool porownanie = 123 >= 321;

	std::cout << "porownanie = " << porownanie << std::endl;
	std::cout << "porownanie = " <<( 111 != 222 ) << std::endl;
	std::cout << "porownanie = " <<( 777 == 777 ) << std::endl;
	std::cout << "porownanie = " <<( 777 < 777 ) << std::endl;

	int x2, y2, z2;
	x2 = y2 = z2 = 0;
	return 0;
}
