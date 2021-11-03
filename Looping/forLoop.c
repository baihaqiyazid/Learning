#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int n, i, sum=0;
 
printf ("masukkan angka = ");
scanf ("%d" , &n);
 
for (i=1 ; i <= n; i++) {

	if (i<=n) {
    
		sum = sum + i;
	
 	}
	
}	 

 printf("\n\ntotal = %d", sum);
 
 return 0;
}
