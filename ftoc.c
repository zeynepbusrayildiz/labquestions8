#include <stdio.h>
#include <stdlib.h>

int main() {
	float f, c;
	printf("Please enter the temperature in Fahrenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("%.3f",c);
	return 0;
}
