#include <iostream>

void whether_contained(std::string, std::string);

int main()
{
	std::string short_word;
	std::string long_word;
	std::cout << "Enter two words\n";
	std::cin >> short_word >> long_word;
	whether_contained(short_word, long_word);

	return 0;
}

void whether_contained(std::string sw, std::string lw)
{
	std::string my_word;
	int s = size(sw);
	int s2 = size(lw);
	for(int i = 0; i < size(sw); i++){
		for(int j = 0; j < size(lw); j++){
			if(sw[i] == lw[j]){
				my_word += lw[j];
				break;
			}
		}
	}
	if(my_word == sw)
		std::cout << "Yes, contained\n";
	else
		std::cout << "Not contained!\n";
}
