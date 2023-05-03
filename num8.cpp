#include <iostream>
#include <string>

void triangle(int);

int main()
{
	int num;
	std::cout << "Enter number for triangle: ";
	std::cin >> num;
	triangle(num);

	return 0;
}

void triangle(int arg)
{
	for(int i = 1; i < (arg+1); i++){
		std::cout << std::string(i, '*') << std::endl;
	}
	for(int i = 1; i < (arg+1); i++){
		std::cout << std::string((arg-i), ' ');
		std::cout << std::string(i, '*') << std::endl;
	}
}
