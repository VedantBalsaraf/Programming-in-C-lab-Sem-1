#include <stdio.h>
#include <string.h>

int main() {
	char src[100];  // Source string
	char dest[100]; // Destination string
	
	// Input string from the user
	fgets(src, sizeof(src), stdin);
	src[strcspn(src, "\n")] = '\0';  
	strcpy(dest,src);
	
    
    
    
 
	printf("%s\n", dest);
	
	return 0;
}
