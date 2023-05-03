#include <iostream>
#include <string>

void replace(std::string);

int main()
{
	std::string sentence;
	std::cout << "Enter a sentence\n";
	getline(std::cin, sentence);
	replace(sentence);

	return 0;
}	

void replace(std::string str){
	std::string changedSent;
	std::string ab = "ab";
	for(int i = 0; i < size(str);i++){
		if(str[i] == 'a')
			changedSent += ab; 
		else 
			changedSent += str[i];
	}
	std::cout << changedSent << std::endl;
}
