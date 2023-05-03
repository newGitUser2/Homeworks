#include <iostream>
#include <string>

int palindrome(int);

int main()
{
	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num;
	if(num == palindrome(num))
		std::cout << num << " is Palindrome\n";

	return 0;
}

int palindrome(int i)
{
	std::string rev = "";
	bool b = true;
	while(b){
		rev += std::to_string(i%10);
		i = i/10;
		if(i < 10){
			rev += std::to_string(i);
			b = false;
		}
	}
/*	int rev_int = std::stoi(rev);
	if(rev_int == i)
		std::cout << i << " is Palindrome\n";  */
	return std::stoi(rev);

}
