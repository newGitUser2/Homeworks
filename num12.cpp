#include <iostream>

void copy_array(int *arr, int *arr2);
void count_of_elem(int *arr, int size);

int main(){
	int size = 5;
	int *array = new int[size];
//	int s = 0;
	int i, num = 0;
	std::cout << "Enter numbers from the range [1,10]\n";
	std::cin >> num;
	while(num != -1){
		std::cin >> num;
		if(size - i > 1){
			array[i] = num;
		}	
		else if(size - i == 1){
			int *tmp_array = new int[size];	
			copy_array(array, tmp_array);
			size *= 2;
			array = new int[size];
			copy_array(tmp_array, array);
			array[i] = num;
		}
		i++;
	}
	count_of_elem(array, size);
	


}

void copy_array(int *arr, int *new_arr){
	for(int i = 0; i < 5; i++){
		new_arr[i] = arr[i];
	}
	delete [] arr;
}

void count_of_elem(int *array, int size){
	int arr[10] = {0};
	for(int i = 1; i < 11; i++){
		for(int j = 0; j < size; j++){
			if(array[j] == i){
				arr[i-1]++;	
			}
		}
	}
	std::cout << "Count of elements\n";
	for(int k = 1; k < 11; k++){
		if(arr[k-1] != 0)
			std::cout << k << " - " << arr[k-1] << '\n';
		else continue;
	}

}

