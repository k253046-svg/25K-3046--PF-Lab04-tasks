#include <stdio.h>

int main(){
	
	char studentID;
	float total_cost = 21;
	
	printf("Have you got a student ID? (Y/N):");
	scanf("%c", &studentID);
	
	if (studentID == 'Y' || studentID == 'y'){
		total_cost = total_cost - 2;
	}
	
	printf("\nNew total: $%.3f", total_cost);
	
	return 0;
}
