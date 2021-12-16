#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void changeValue(int num) {    
    printf("Before adding value inside function num=%d \n",num);    
    num=num+100;    
    printf("After adding value inside function num=%d \n", num);    
}    
	
void changeAddress(int *num) {    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num);    
}      
int main() {    
    int x=100;   
	
	printf("PASS BY VALUE\n\n");
    printf("Before function call x=%d \n", x);    
    changeValue(x);//passing value in function    
    printf("After function call x=%d \n", x); 
	
	int z = 100;
    printf("\n\nPASS BY REFERENCES\n\n");
    printf("Before function call x=%d \n", z);    
    changeAddress(&z);//passing reference in function    
    printf("After function call x=%d \n\n\n", z);    
    

	return 0;  
}    
