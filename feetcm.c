#include <stdio.h>
#include <stdlib.h>

int main() {
	float feet, cm;
	printf("Please enter the length in feet:");
	scanf("%f",&feet);
	cm=feet*30.48;
	printf("The length in cm: %.3f",cm);
	return 0;
}
