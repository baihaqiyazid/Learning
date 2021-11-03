#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int r, ar, par;
	
	printf("		CIRCLE\n\n");
	
	printf("Input Value of R = ");
	scanf("%d", &r);
	
	ar = 3.14*r*r;
	par = 2*3.14*r;
	
	printf("Result of Area      = %d\n", ar);
	printf("Result of Perimeter = %d", par);
	
	
	return 0;
}
