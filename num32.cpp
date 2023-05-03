#include <iostream>

void to_lower(char mchar[]);
void to_upper(char mchar[]);

int main()
{
	char sentence[22] = "Here IS some sentence";
	to_lower(sentence);
	to_upper(sentence);

	return 0;
}

void to_lower(char mchar[])
{
	for(int i = 0; i < 21; i++){
//		if(65 <= int(mchar[i]) <= 90) интересно, но в этом случае не работает
		if(int(mchar[i]) >= 65 && int(mchar[i]) <= 90)
			mchar[i] = mchar[i] + 32; 
	}
	std::cout << mchar << std::endl;
}

void to_upper(char mchar[])
{
	for(int i = 0; i < 21; i++){
		if(int(mchar[i]) >= 97 && int(mchar[i]) <= 122)
			mchar[i] = mchar[i] - 32;
	}
	std::cout << mchar << std::endl;
}
