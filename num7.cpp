#include <iostream>

void func(int, int);

int main(){
	
	int n = 6; 
	int m = 4;
	func(n, m);
}

void func(int var1, int var2){
	int cnt = 0;
	for(int i = 0; i < 2; i++){
                for(int j = 0; j < var1; j++){
                        std::cout << "*";
                }
                std::cout << '\n';
                while(cnt != 2){
                        std::cout << "*" <<
                                std::string(var2, ' ') << "*\n";
                        cnt++;
                }
        }
}
