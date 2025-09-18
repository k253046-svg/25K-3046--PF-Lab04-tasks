#include <stdio.h>

int main(){
	
	int pizza, size, crust_type, choice, time;
	char studentID, cheese_extra;
	float total_cost = 0;
	
	int pizza_size;
	printf("\nSelect Pizza size 1.Small, 2.Medium, 3.Large :");
	scanf("%d", &pizza_size);
	
	if (pizza_size == 1){
		printf("\nSmall Pizza Selected.");
	}
	else if (pizza_size == 2){
		printf("\nMedium Pizza Selected.");
	}
	else if (pizza_size == 3){
		printf("\nLarge Pizza Selected.");
	}
	else {
		printf("\nInvalid Size.");
	}
	
	
	printf("\nHow many pizzas do you want? (1, 2, or 3):");
	scanf("%d", &pizza);
	
	if (pizza == 1){
		total_cost = 8;
		printf("Your total is $8.");
	}
	else if (pizza == 2){
		total_cost = 15;
		printf("Check our multi-pizza deals");
	}
	else if (pizza == 3){
		total_cost = 21;
		printf("Check our multi-pizza deals");
	}
	else {
		printf("\nInvalid Option.");
	}
	
	
	printf("\nSelect crust type \n1. Regular $0, \n2. Thin $1, \n3. Stuffed $2 \n: ");
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
	
	
    printf("\nWould you like extra cheese? (Y/N):");
	scanf("%s", &cheese_extra);
	
	if (cheese_extra == 'Y' || cheese_extra == 'y'){
		total_cost = total_cost + 1.5;
	}
	
	
	printf("\nWhat is the time right now (0-23): ");
	scanf("%d", &time);
	
	if (time >= 11 && time <= 14){
		total_cost = total_cost - (total_cost * 0.10);
		printf("\nYou get a discount so your new total is $%.3f", total_cost);
	}	
	else {
		printf("\nThere is no discount, total is $%.3f", total_cost);
	}
	
	
	printf("\nHave you got a student ID? (Y/N):");
	scanf("%s", &studentID);
	
	if (studentID == 'Y' || studentID == 'y'){
		total_cost = total_cost - 2;
	}
	
	
	if (pizza == 3 && crust_type == 3){
		printf("\nYou get free garlic bread! \nyou get this because you chose 3 pizzas and crust type 3");
	}
	
	
	printf("\n1. Pickup  or  2. Delivery ?:");
	scanf("%d", &choice);
	
	if (choice == 2){
		total_cost = total_cost + 3;
	}
	
	
	printf("\nYour final cost is: $%.3f", total_cost);
		
	return 0;
}
