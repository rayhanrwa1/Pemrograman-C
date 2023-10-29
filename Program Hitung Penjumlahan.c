#include <stdio.h>
//DEFIA
int main()
{
	int a = 12; 
	int b = 28; 
    int sum = a+b;	
	
	float c = 2.5;
	float d = 8.9;
	
	sum = a + (b * c) - d;
	printf("bilangan a: %d\n", a);
	printf("bilangan b: %d\n", b);
	printf("bilangan c: %.2f\n", c);
	printf("bilangan d: %.2f\n", d);
	
	
	printf("hasil: = %d\n", sum);
	
	
	return 0;
}