#include <stdio.h>
#include <string.h>

int main() {
	char str1[100];  // First string
	char str2[100];  // Second string
int result;
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]='\0';
	
    fgets(str2,sizeof(str2),stdin);
	str2[strcspn(str2,"\n")]='\0';
	result=strcmp(str1,str2);
    
    
 
    
    
    
    
	if (result == 0) {
		printf("equal\n");
	} else if (result < 0) {
		printf("str1 is less than str2\n");
	} else {
		printf("str1 is greater than str2\n");
	}
	
	return 0;
}
