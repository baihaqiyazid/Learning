#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
	
	char name[50];
	int cityNo;
	float salary;
}person2;//declar cara 2 

int main(){
	
	struct Person person1 = {"Leo Fer", 123, 10000} ; //declar + inisialisasi cara 1
	
	person2.cityNo=999;
	strcpy(person2.name, "Zack Dan");
	person2.salary=50000000;
	
	
	printf("Nama    : %s\n", person1.name);
	printf("City NO : %d\n", person1.cityNo);
	printf("Salary  : %f\n\n", person1.salary);
	
	printf("Nama    : %s\n", person2.name);
	printf("City NO : %d\n", person2.cityNo);
	printf("Salary  : %f\n", person2.salary);

	return 0;	
}
