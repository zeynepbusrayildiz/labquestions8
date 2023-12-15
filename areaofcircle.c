#include <stdio.h>
#include <stdlib.h>


int main() {
	int r;
	float area, pi=3.14;
	printf("Please enter the radius of the circle:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("Area of circle is %.2f",area);
	return 0;
}
