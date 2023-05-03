#include <iostream>

void reverse(int);

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
//	std::cout << "\n";
	reverse(num);

	return 0;
}

void reverse(int i)
{
	bool b = true;
	std::string rev = "";
	while(b){
		rev += std::to_string(i%10);
		i = i/10;
		if(i < 10){
			rev += std::to_string(i%10);
			b = false;
		}
	}
	std::cout << rev << std::endl;
}
