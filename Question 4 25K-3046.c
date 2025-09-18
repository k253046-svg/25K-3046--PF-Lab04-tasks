#include <stdio.h>

int main(){
	
	int crust_type;
	int total_cost = 15;
	
	printf("Select crust type \n1. Regular $0, \n2. Thin $1, \n3. Stuffed $2 \n: ");
	scanf("%d", &crust_type);
	
	if (crust_type == 1){
		total_cost = total_cost + 0;
	}
	else if (crust_type == 2){
		total_cost = total_cost + 1;
	}
	else if (crust_type == 3){
		total_cost = total_cost + 2;
	}
	else {
		printf("\nInvalid crust type.");
	}
	
	printf("\nYour new total cost: $%d", total_cost);
	
	return 0;
}
