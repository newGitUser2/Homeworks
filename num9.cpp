#include <iostream>

//Works only for odd numbers
void triangle_by_base(int);

int main(){
	int base = 0;
	std::cout << "Enter the base of the triangle: ";
	std::cin >> base;
	triangle_by_base(base);
	return 0;
}

void triangle_by_base(int base){
        for(int i = 1; i < base + 1; i += 2){
                std::cout << std::string((base - i)/2, ' ') <<
                        std::string(i, '*') <<
                        std::string((base - i)/2, ' ') << '\n';
        }
}
