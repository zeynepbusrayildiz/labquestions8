#include <stdio.h>
#include <stdlib.h>


int main() {
	int A,B,C;
	printf("Please enter A value:\n");
	scanf("%d",&A);
	printf("Please enter B value:\n");
	scanf("%d",&B);
	printf("Please enter C value:\n");
	scanf("%d",&C);
	if(A>=B&&A>=C) printf("The largest number is %d",A);
	else if(B>=A&&B>=C) printf("The largest number is %d",B);
	else printf("The largest number is %d",C);
	return 0;
}
