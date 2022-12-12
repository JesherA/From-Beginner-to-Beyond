#include <iostream>

int main()
{
	std::cout << "Enter your favourite number between 1 and 100: ";

	int favnr = { 0 };
	std::cin >> favnr;

	std::cout << "Amazing!! That's my favourite number too! \n";
	std::cout << "No really, " << favnr << " is my favourite number! \n";

	return 0;
}