#include <stdio.h>
#include <stdlib.h>


int penjumlahan(int num) {

  if(num <= 1){

    return 1;

  }
  return num + penjumlahan(num-1);

}


int main()

{

	
	printf("%d\n", penjumlahan(5));
	printf("%d", penjumlahan(2));
	

	return 0;

}
