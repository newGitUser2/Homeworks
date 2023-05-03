#include <iostream>

void allPrimes(int); //не работает при 25 и 49

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	allPrimes(num);

	return 0;
}

void allPrimes(int var)
{
	for(int i = 2; i <= var; i++){
		if((i*i) %24 == 1 || i ==2 || i == 3){
			std::cout << i << ", ";
		}
	}	
	std::cout << std::endl;
}


