#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rectangel(int *l, int *b){
	
		
	int area = (*l)*(*b);
	int per = 2*(*l)*(*b);
	

	printf("\nArea = %d\n", area);
	printf("Perimeter = %d\n\n", per);
}


void circle(float r){
	
	float area, per;
	
	area = 3.14*r*r;
	per = 2*3.14*r;
	
	printf("\nArea = %.2f\n", area);
	printf("Perimeter = %.2f\n\n", per);
}

void square(int l){
	
	float ar, per;
	
	ar = l * l;
	per = 4 * l;
	
	printf("\nArea = %.2f\n", ar);
	printf("Perimeter = %.2f\n\n", per);
}

void triangle(float a, float b, float c){
	
	float ar, per, s;
	
	s = (a+b+c)/2.0;
	ar = sqrt(s*(s-a)*(s-b)*(s-c));
	per	= a+b+c;
	
	printf("\n\nArea = %.2f\n", ar);
	printf("Perimeter = %.2f\n", per);
	
}


float sum(float *a, float *b){
	
	float total = (*a)+(*b);
	
	return total;
}

void menu(){
	
	printf("1. Area and Perimeter of Circle\n"); 
	printf("2. Area and Perimeter of Rectangel\n");
	printf("3. Area and Perimeter of Square\n");
	printf("4. Area and Perimeter of Triangle\n");
	printf("5. Sum of Two Number\n");
	
}

int main(){
	
	int pilihan, l, b;
 	
	menu();
	
	printf("Masukkan Pilihan > ");
	scanf("%d", &pilihan);
	printf("\n");

	do {
		
		if (pilihan==1){
			
			float r; 
			
			printf("Masukkan r = "); scanf("%f", &r);
			
			if (r < 0){
				exit(1);
			}
			
			circle(r);
		}
	 	
		else if (pilihan==2){
	 		
	 		printf("Masukkan panjang = "); scanf("%d", &l);
			printf("Masukkan lebar = "); scanf("%d", &b);
			
			if (l < 0 || b < 0){
				exit(1);
			}
			
	 		rectangel(&l,&b);			
		 }
		 
		else if(pilihan==3){
		 	
			printf("Input Value of L = ");
			scanf("%d", &l);
			
			if (l < 0){
				exit(1);
			}
			
			square(l);
		}
		
		else if(pilihan==4){
			
			float a,b,c;
			
			printf("Input Value of a = ");
			scanf("%f", &a);
			printf("Input Value of b = ");
			scanf("%f", &b);
			printf("Input Value of c = ");
			scanf("%f", &c);
			
			if (a < 0 || b < 0 || c < 0){
				exit(1);
			}
			
			triangle(a,b,c);
			
		}
		else if(pilihan==5){
			
			float a,b;
			
			printf("Input Value of a = ");
			scanf("%f", &a);
			printf("Input Value of b = ");
			scanf("%f", &b);
			
			if (a < 0 || b < 0){
				exit(1);
			}
			
			float total = sum(&a,&b);
			printf("total = %.2f \n\n", total);
			
		}
		else {
			
			printf("INPUT TIDAK ADA DI PROGRAM\n\n");
			system("pause");
			system("cls");
			main();
		}
	}
	
	while (pilihan > 0 );
	 
	return 0;
}
