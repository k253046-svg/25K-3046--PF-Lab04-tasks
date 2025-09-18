#include <stdio.h>

int main(){
	
	int pizza;
	int crust_type;
	
	printf("Number of pizzas?:");
	scanf("%d", &pizza);
	printf("\nSelect crust type, \n1. Regular, \n2. Thin, \n3. Stuffed: ");
	scanf("%d", &crust_type);
	
	if (pizza == 3 && crust_type == 3){
		printf("\nYou get free garlic bread!");
	}
	
	return 0;
}
