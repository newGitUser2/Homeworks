#include <iostream>
#include <cstdlib>
#include <ctime>
void answer(int);

int main()
{
	int num;
	std::cout << "Guess the number: ";
	std::cin >> num;
	answer(num);
	return 0;
}

void answer(int user_ans)
{
	int true_ans = rand() % 100;
	int count = 0;
	while(user_ans != true_ans){
		if(user_ans > true_ans){
			count += 1;
			if((user_ans - true_ans) > 10)
				std::cout << "too high!\n";
			else
				std::cout << "high\n";
			std::cin >> user_ans;;
		}
		if(user_ans < true_ans){
			count += 1;
			if((true_ans - user_ans) > 10)
				std::cout << "too low!\n";
			else
				std::cout << "low\n";
			std::cin >> user_ans;
		}
	}
	std::cout << "Count of attemps: " << count << std::endl;
}
