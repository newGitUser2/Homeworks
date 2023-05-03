#include <iostream>

std::string to_binary(int);

int main(){
	int num = -8;
	if(num < 0)
		num *= -1;
	std::cout << to_binary(num) << '\n';
}

std::string to_binary(int num){
	int result = 0;
	std::string rem = "";
	rem = (num %2 == 0) ? "0" : "1";
	while(num/2 != 0){
		num = num/2;
		result = num;
		if(result %2 == 0){
			rem = std::to_string(0) + rem;
		}
		else
			rem = std::to_string(1) + rem;
	}

	return rem;
}
