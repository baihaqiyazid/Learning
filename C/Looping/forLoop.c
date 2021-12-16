#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
	
	int Ages[N] = {49, 48, 26, 19, 16};
	int total; 
	
	total=sum(Ages, N);
	
	printf("\nTotal Ages is = %d", total);
	
	
}

int sum(int Array[], int array){

	int index;
	int total = 0;
	
	
	for(index=0; index< array; index++)
	{
	
		total+= Array[index];
		
	}

	return total;

}
