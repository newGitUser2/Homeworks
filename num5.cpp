#include <iostream>
#include <string>

void concat(int, int);

int main()
{
	int a, b;
	std::cout << "Please input two numbers: ";
	std::cin >> a >> b;
	concat(a, b);

	return 0;
}

void concat(int a, int b)
{
	std::string a2 = std::to_string(a);
	std::string b2 = std::to_string(b);
	std::string res = a2 + b2;
	std::cout << res << std::endl;
}
