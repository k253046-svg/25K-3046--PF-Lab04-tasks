#include <stdio.h>

int main(){
	
	int choice;
	float total_cost = 15;
	
	printf("1. Pickup  or  2. Delivery ?:");
	scanf("%d", &choice);
	
	if (choice == 2){
		total_cost = total_cost + 3;
	}
	
	printf("\nYour final cost is: $%.3f", total_cost);
	
	return 0;
}
