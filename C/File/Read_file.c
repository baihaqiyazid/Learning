#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *fy;
char c, words[500];
int x;

//fy = fopen("D:/FILE_yazid.txt", "r");

if((fy = fopen("D:/FILE_yazid.txt", "r")) == NULL){
	
	printf("Data Null");
}

else
{	
	for(x=0; x<6; x++)
	{
		fgets(words, 500, fy);
		printf("%s", words);
	}
}
fclose(fy);

return 0;
}
