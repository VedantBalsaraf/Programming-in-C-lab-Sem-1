#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main() {
	int n;
	char *strings[MAX_STRINGS]; // Array of pointers to strings
	char inputString[MAX_LENGTH];
    // Write your code here...
    scanf("%d", &n);

    // Read strings
    for (int i = 0; i < n; i++) {
        scanf("%s", inputString); // Read each string
        strings[i] = malloc(strlen(inputString) + 1); // Allocate memory
        strcpy(strings[i], inputString); // Copy to allocated memory
    }

    // Sort strings by length (stable bubble sort to keep order for equal lengths)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(strings[j]) > strlen(strings[j + 1])) {
                char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    // Print sorted strings
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]); // Free allocated memory
    }/
    
    
	return 0;
}
