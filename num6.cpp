#include <iostream>

int power(int, int);

int main()
{
	int num, pow;
	std::cout << "Enter num and power_num: ";
	std::cin >> num >> pow;
	std::cout << power(num, pow) << std::endl;

	return 0;
}

int power(int a, int b)
{	int res = 1;
	for(int i = 1; i < (b+1); i++){
		res *= a;
	}
	return res;
}
