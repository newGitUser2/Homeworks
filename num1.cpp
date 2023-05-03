#include <iostream>

int sum_func(int);

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	int s = sum_func(num);
	std::cout << "Sum is: " << s << std::endl;
	return 0;
}

int sum_func(int i)
{
	int sum = 0;
	bool b = true;
	while(b){
		sum += i%10;
	       	i = i/10;
		if(i < 10){
			sum += i;	
			b = false;
		}
	}
	return sum;

}
