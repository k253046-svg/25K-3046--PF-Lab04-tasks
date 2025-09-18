#include <stdio.h>

int main(){
	
	char cheese_extra;
	float total_cost = 15.000;
	
	printf("Would you like extra cheese? (Y/N):");
	scanf("%c", &cheese_extra);
	
	if (cheese_extra == 'Y' || cheese_extra == 'y'){
		total_cost += 1.5;
	}
	else {
		total_cost = total_cost;
	}
	
	printf("\nTotal cost is $%.3f", total_cost);
	
	return 0;
}
