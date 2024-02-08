#include <stdio.h>


/*
	You are given the value of the base and height of a triangle. Calculate the area of the triangle.
*/


int main(){
	float b, h, a;
	int x = 10, y = 20;
	printf("Enter the base and height: \n");
	scanf("%f %f", &b, &h);
	a = 0.5*b*h;
	b = 0.5*a*b;
	printf("%f is the area\n", a);
	printf("%f is the area\n", b);
	return 0;
}
