#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int x;
	int a = 100000;
	
	printf(" 				Pay schedule Shown Below\n\n");
	printf("Input x = ");
	scanf("%d", &x);
	
	if ( x <= 40 )
		x = ("%d", a);
		
	else if ( x <= 60 )
		x = ("%d", a * 1.5);
	
	else if ( x <= 80 )
		x = ("%d", a * 2);
	
		
	printf("%d", x);					
	
	return 0;
}
