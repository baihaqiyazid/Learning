#include <stdio.h>
#include <stdlib.h>

//f(x)= x^n

int main(){
	
	int x;
	scanf("%d", &x);
	
	int n;
	scanf("%d", &n);
	
	
	printf("%d\n\n", rekursif(x, n));
	iteratif(x, n);
	return 0;
}

int rekursif(int x, int n){
	
	
	if (n == 0){
		return 1;
	}
	else{
		return x*rekursif(x, n-1);
	}
	
}

int iteratif(int x, int n){
	
	int total=1;
	int i;
	for (i=0; i<n; i++){
		total = total*x;
	}
	printf("%d", total);
}

