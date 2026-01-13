#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) 
{
	if(n<=1)
	return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0)
			return 0;//divisible, not prime
	}
	return 1;//prime
}

// Function to check if a number is an Armstrong number
int is_armstrong(int n) {
	int original = n, sum = 0, digits = 0, temp;
   
    // Count digits
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
	}
	// Calculate sum of powers of digits
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
   
    return (sum == original);

   

}
int main() {
	int n;
	
	// Input from the user
	scanf("%d", &n);
	
	// Check if the number is prime
	if (is_prime(n))
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);
	
	// Check if the number is an Armstrong number
	if (is_armstrong(n))
		printf("%d is Armstrong\n", n);
	else
		printf("%d is not Armstrong\n", n);
	
	return 0;
}
