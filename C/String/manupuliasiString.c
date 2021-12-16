#include <stdio.h>
#include <string.h>

int main () {

   char str1[] = "aku";
   char str2[] = "baca";
   char str3[15];
   int  len ;
   
   printf("string 1 : %s\n", str1);
   printf("string 2 : %s\n", str2);

   
    //--------- String Length
   printf("\n\n\n		|STRING LENGTH|\n\n");
   printf("strlen of str1 = %d\n", strlen(str1));
   printf("strlen of str2 = %d\n", strlen(str2));
   
    //-------- Compare Str 
   printf("\n\n		|STRING COMPARE|\n\n");
   if (strcmp(str1, str2) < 0){
   		printf("string compare : str1 less than str2");
   }
   else if(strcmp(str1, str2) > 0){
   		printf("string compare : str1 greater than str2");
   }
   else{
   		printf("string compare : str1 and str2 are the same ");
   }
   
   //------- copy str1 into str3 
   printf("\n\n\n		|STRING COPY|\n\n");
   strcpy(str3, str1);
   printf("string copy of str3 :  %s\n", str3 );

   //------- concatenates str1 and str2 
   printf("\n\n		|STRING CONCATENATES|\n\n");
   strcat( str1, str2);
   printf("strcat (str1, str2) :   %s", str1 ); 
   //printf("\nstr gabungan 	   : %s %s", str1, str3);
 	  
   //------- String Length str1 After Concat
   printf("\n\n\n		|STRING LENGTH OF STRING CONCATENATES|\n\n");
   printf("strlen of str1 =  %d\n", strlen(str1) );


   return 0;
}
