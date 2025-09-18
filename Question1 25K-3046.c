#include <stdio.h>

int main(){
	
	int pizza_size;
	printf("Select Pizza size 1.Small, 2.Medium, 3.Large :");
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
	
		
	return 0;
}
