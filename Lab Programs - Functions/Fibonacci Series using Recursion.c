#include <stdio.h>

// Recursive function to print Fibonacci numbers
void printFibonacci(int n, int t1, int t2) {if (n <= 0)  // Base case: stop recursion when no terms are left
        return;

    printf("%d ", t1);
	
	
	
	
	printFibonacci(n-1,t2,t1+t2  );
}

int main() {
    int n;

    // Input: Read the number of terms
    scanf("%d", &n);

    // Start the recursion with the first two Fibonacci numbers (0 and 1)
    printFibonacci(n, 0, 1);

    return 0;
}
