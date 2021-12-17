#include <stdio.h>
#include <stdlib.h>

main() {
	 
   FILE *fp;
   int x = 1;
   char z [250];

   fp = fopen("D:/FILE_yazid.txt", "w"); 					 	 /*Membuat File*/

   fputs(" Hello!!\n My Name is Muhammad Yazid Baihaqi \n", fp); /*menampilkan parameter(banyak) di file*/
   
	fputc('\n',fp);									     	 /*menampilkan parameter(satu) di file*/
   
	while(1)										 	            /*melakukan Looping untuk menginput text dan menampilakan inputan di file*/
   {
	   	puts("Input Text : ");
	   	gets(z);
		if (*z == NULL){	
   			exit(1);
		}													  /*menginput char z atau sama dengan scanf*/
	   	fprintf(fp,"	=> %d. %s\n",x++, z); 
   }
   fclose(fp);
}
