#include <iostream>

void delete_repeated(std::string);

int main()
{
	std::string str;
	std::cout << "Enter a sentence:" << std::endl;
	getline(std::cin, str);
	delete_repeated(str);

	return 0;
}

void delete_repeated(std::string sentence)
{	
	std::string newSentence;
	for(int i = 0; i < size(sentence); i++){
		if(sentence[i] != sentence[i-1]){
			newSentence += sentence[i];
		}		
	}
	std::cout << newSentence << std::endl;
}
