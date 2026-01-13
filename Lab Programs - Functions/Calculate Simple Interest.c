#include <stdio.h>

// Function to calculate simple interest
int calculateSimpleInterest( int principal,int time,int rate      ) {
	return (principal * time * rate) / 100;
}


	// Complete the function
	


int main() {
	int principal, time, rate, simpleInterest;
    
    scanf("%d",&principal);
    scanf("%d",&time);
    scanf("%d",&rate);
    
    
	// Calculate the simple interest
	simpleInterest = calculateSimpleInterest(principal, time, rate);
	
	// Print the result
	printf("%d\n", simpleInterest);
	
	return 0;
}
