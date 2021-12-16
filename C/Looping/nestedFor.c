#include <stdio.h>
int main ()
{
/* local variable definition */
	int i,j, n;
	
	printf("input N = "); scanf("%d", &n);
	
 	for(i=1; i<=n; i++){
 		for(j=1; j<=n; j++){
 			printf("%d x %d = %d\n",i, j, i*j);
		 }
		 printf("\n\n");
	}
	


return 0;
}
