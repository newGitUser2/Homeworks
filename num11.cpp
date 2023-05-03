#include <iostream>
#include <cstdlib>

int main(){
	int p = 0;
	unsigned int num, num2 = 0;
	std::cout << "Keep in mind any number [1:100] range\n";
	std::string str = "";
	unsigned int quest = 50;
	std::cin >> str;
	if(str == "ok")
		std::cout << quest << " ?  ";
	else
	       	exit(0);
	std::string answer = "";
	while(p < 8 && answer != "yes"){
		p++;
		if(quest != 50)
			std::cout << quest << " ?  ";
		std::cout << "Your answer: ";
		std::cin >> answer;
		if(answer == "low" && quest == 50){
			num = quest;
			quest /= 2;
		}	
		else if(answer == "low" && quest != 50){
			if(num - quest == 1)
				quest -= 1;
			else{
				num2 = num;  
				num = quest;
				quest  = (num > num2) ? (quest - (num - num2)/2)
                               			: (quest - (num2 - num)/2);
			}	
		}
		else if(answer == "high" && quest == 50){
			num = quest;
			quest += quest/2;
		}
		else if(answer == "high" && quest != 50){	
			if(quest - num == 1)
				quest += 1;
			else{
				num2 = num;
				num = quest;
				quest  = (num > num2) ? (quest + (num - num2)/2)
						: (quest + (num2 - num)/2);
			}
		}		
	}	
	return 0;
}
