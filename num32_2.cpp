#include <iostream>

void isAnagram(std::string, std::string);

int main()
{
	std::string word1, word2;
	std::cout << "Enter two numbers\n";
	std::cin >> word1 >> word2;
	isAnagram(word1, word2);

	return 0;
}	

void isAnagram(std::string w1, std::string w2)
{
	std::string some_word = std::string(size(w1), 'n');
	std::string new_str;
	for(int i = 0; i < size(w1); i++){
		for(int j = 0; j < size(w2); j++){
			if(size(w1) == size(w2) && w1[i] == w2[j])
				new_str += "n";
		}
	}
	if(new_str == some_word)
		std::cout << "Word is anagram\n";
	else
		std::cout << "No!";
}	
