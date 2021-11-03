#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int l, ar, per;
	
	printf("		SQUARE\n\n");
	
	printf("Input Value of L = ");
	scanf("%d", &l);
	
	ar = l * l;
	per = 4 * l;

	printf("Area Square = %d\n", ar);
	printf("Perimeter Square = %d", per);
	
	
	return 0;
	
}
