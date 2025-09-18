#include <stdio.h>

int main(){
	
	int pizza;
	int total_cost = 0;
	
	printf("How many pizzas do you want? (1, 2, or 3):");
	scanf("%d", &pizza);
	
	if (pizza == 1){
		total_cost = 8;
	}
	else if (pizza == 2){
		total_cost = 15;
	}
	else if (pizza == 3){
		total_cost = 21;
	}
	else {
		printf("\nInvalid Option.");
	}
	
	printf("The total cost of %d pizzas: $%d", pizza, total_cost);
	
	return 0;
}
