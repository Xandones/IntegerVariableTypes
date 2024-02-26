#include <iostream>

int main()
{
	int Number;

	Number = 45;
	std::cout << "Number value: " << Number << "\n";
	std::cout << "Size of Number variable: " << sizeof(Number) << " bytes" << "\n";
	std::cout << "Address of Number variable in RAM memory: " << &Number << "\n" ;

	system("PAUSE");
}