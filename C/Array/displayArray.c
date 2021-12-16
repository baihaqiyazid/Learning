#include <stdio.h>
#include <stdlib.h>
#define N 5

void displayArray(int array[], int len);

void displayArray(int array[], int len){
						  
	int index;
	
	
	for (index = 0; index < len;index++){
		printf("ages [%d] : %d \n", index, array[index]);
	}              
	
}

int main() {
	
	int ages[N] = {49, 48, 26, 19, 16};    
	
	displayArray(ages, N);              
	
	return 0;
}
