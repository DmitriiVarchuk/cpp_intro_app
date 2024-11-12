#include <iostream>
#include <Windows.h>

using std::cout;
using std::endl;

int main() 
{
	system("color 0A");
	std::cout << "it's green, press the key to change color" << std::endl;
	cout << '\a' << endl;
	system("pause");
	system("color 0C");
	std::cout << "it's red, press the key to change color" << std::endl;
	cout << '\a' << endl;
	system("pause");
	system("color 0E");
	std::cout << "it's yellow, but it's already the end" << std::endl;
	return 0;
}