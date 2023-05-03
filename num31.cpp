#include <iostream>
#include <cstring>
#include <string>

int find(char* str, char* str2);

int main()
{
	char mstr[] = "cat";
	char mstr2[] = "I have a cat. My cat's name is..";
	char* pstr = mstr;
	char* pstr2 = mstr2;
	std::cout << find(pstr, pstr2) << std::endl;

	return 0;
}	

int find(char* str, char* str2)
{
	std::string new_str = "";
	std::string some_str = "";
	int index = 0;
	for(int i = 0; i < strlen(str); i++){
		for(int j = 0; j < strlen(str2); j++){
			if(str[i] == str2[j]){
				index = j;
				some_str += "n";
				if(new_str == str)
					break;
				break;
			}
		}			
	}
	if(some_str == std::string(strlen(str), 'n')){
		index = index - strlen(str) + 1;
		return index;
	}		
	else 
		return -1;
}	
