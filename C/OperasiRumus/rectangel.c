#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int l, b, ar, per;
	
	printf("						RECTANGEL\n\n");
	
	printf("Input Value of L = ");
	scanf("%d", &l);
	printf("Input Value of B = ");
	scanf("%d", &b);
	
	ar = l*b;
	per = 2*(l+b);
	
	printf("Result of Area      = %d\n", ar);
	printf("Result of Perimeter = %d", per);
	
	return 0;
	
}
