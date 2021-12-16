int main(int argc, char *argv[]) {
	
	int a, b, c, ar, per, s;
	
	printf("		TRIANGLE\n\n");
	
	printf("Input Value of a = ");
	scanf("%d", &a);
	printf("Input Value of b = ");
	scanf("%d", &b);
	printf("Input Value of c = ");
	scanf("%d", &c);
	
	s = (a+b+c)/2.0;
	
	ar = sqrt(s*(s-a)*(s-b)*(s-c));
	per	= a+b+c;
	
	printf("Result of Area = %d\n", ar);
	printf("Result of Perimeter = %d", per);
	
	return 0;
}
