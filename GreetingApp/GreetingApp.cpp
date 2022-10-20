
#include <iostream>
#include "Greeter.h"

#ifdef _WIN32
#include "windows.h"
#endif

int main()
{
#ifdef _WIN32
	SetConsoleCP(1251);
#endif

	setlocale(LC_ALL, "Russian");
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	Greeter greeter;
	greeter.greet(name);
	return 0;
}