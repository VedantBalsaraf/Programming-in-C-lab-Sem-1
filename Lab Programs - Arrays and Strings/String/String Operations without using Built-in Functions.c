#include <stdio.h>

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
	int i=0;
	while (str1[i]!='\0'&&str2[i]!='\0'&&str1[i]==str2[i]){
		i++;
	}
	return str1[i]-str2[i];
    // write your code here
    
    
}

// Function to find the longer string
void findLongerString(char str1[], char str2[]) { 
	int len1=0,len2=0;
	while(str1[len1]!='\0'){
		len1++;
	}
	while(str2[len2]!='\0'){
		len2++;
	}
	if(len1>len2){
		printf("Longer string: %s\n",str1);
	}else if(len2>len1){
		printf("Longer string: %s\n",str2);
	}
	else{printf("String have equal length\n");
		}
    
    
}

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[], char result[]) {
	int i=0,j=0;
	//Copy str1 to result
	while (str1[i]!='\0'){
		result[i]=str1[i];
		i++;
	}//Copy str2 to result ,starting from the end of str1 
	while (str2[j]!='\0'){
	result[i]=str2[j];
	i++;
	j++;
	}
    result[i]='\0';
		
		

}

// Function to find occurrence of substring in the main string
int findSubstring(char mainStr[], char subStr[]) {
int mainLen=0,subLen=0;
	while (mainStr[mainLen]!='\0'){
		   mainLen++;
	
}
	while(subStr[subLen]!='\0'){
		subLen++;
		
	}
	for(int i=0; i<=mainLen-subLen;i++){
		int j;
		for(j=0;j<subLen;j++){
			if(mainStr[i+j]!=subStr[j]){break;
		}
	}
		if(j==subLen){
			return i;
		}
	}return -1;

	
    
    
}

int main() {
	char str1[100], str2[100], result[200];
	int compare, substringIndex;
	
	// Input two strings from console
	printf("Enter first string: ");
	scanf("%s", str1);
	printf("Enter second string (substring): ");
	scanf("%s", str2);
	
	// Compare the strings
	compare = compareStrings(str1, str2);
	if (compare == 0) {
		printf("Strings are equal\n");
	} else {
		printf("Strings are not equal\n");
	}
	
	// Find the longer string
	findLongerString(str1, str2);
	
	// Concatenate the strings
	concatenateStrings(str1, str2, result);
	printf("Concatenated string: %s\n", result);
	
	
	// Find occurrence of substring in the first string
	substringIndex = findSubstring(str1, str2);
	if (substringIndex != -1) {
		printf("Substring found at index: %d\n", substringIndex);
	} else {
		printf("Substring not found in the first string\n");
	}
	
	return 0;
}
