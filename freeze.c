#include <stdio.h>
#include <stdlib.h>

int main() {
	int temperature;
	printf("Please enter the temperature:");
	scanf("%d",&temperature);
	if(temperature<0) printf("Temperature is below the freezing point.");
	else if(temperature>0) printf("Temperature is above the freezing point.");
	else printf("Temperature is at the freezing point.");
	return 0;
}
