#include <iostream>

void func(int, int, char);

int main(){
	int num, num2 = 0;
	std::cout << "Enter two numbers: ";
	std::cin >> num >> num2;
	char sym;
	std::cout << "Enter some symbol: ";
	std::cin >> sym;
	func(num, num2, sym);

}

void func(int n, int m, char symbol){
	int cnt = 0;
        for(int i = 0; i < 2; i++){
                for(int j = 0; j < n; j++){
                        std::cout << symbol;
                }
                std::cout << '\n';
                while(cnt != 2){
                        std::cout << symbol <<
                                std::string(m, ' ') << symbol << '\n';
                        cnt++;
                }
        }
	
}
