#include <stdio.h>

int main(){
	
	int pizza;
	int total_cost = 0;
	printf("how many pizzas do you want?:");
	scanf("%d", &pizza);
	
	if (pizza == 1){
		total_cost = 8;
		printf("Your total is $8.");
	}
	else if (pizza >= 1){
		printf("Check our multi-pizza deals");
	}
	
	return 0;
}
