#include <stdio.h>

int main(){
	
	int time;
	float total_cost = 10;
	
	printf("What is the time right now (0-23): ");
	scanf("%d", &time);
	
	if (time >= 11 && time <= 14){
		total_cost = total_cost - (total_cost * 0.10);
		printf("\nYou get a discount so your new total is $%.3f", total_cost);
	}	
	else {
		printf("\nThere is no discount, total is $%.3f", total_cost);
	}
		
	return 0;
}
