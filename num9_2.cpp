#include <iostream>

void triangle_by_height(int);

int main(){
	int h = 5;
	triangle_by_height(h);

	return 0;
}

void triangle_by_height(int height){
	height *= 2;
        for(int i = 1; i < height; i += 2){
                std::cout << std::string((height - i)/2, ' ') <<
                        std::string(i, '*') <<
                        std::string((height - i)/2, ' ') << '\n';
        }
}
