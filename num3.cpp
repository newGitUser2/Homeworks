#include <iostream>

bool isPrime(int);// не работает при 49

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	if(isPrime(num)) 
		std::cout << "Number is Prime\n";
	else
		std::cout << "This number is not prime!\n";

	return 0;
}

bool isPrime(int i)
{
	if((i*i)%24 == 1 || i == 2 || i == 3)
		return true;
	else 
		return false;
}
