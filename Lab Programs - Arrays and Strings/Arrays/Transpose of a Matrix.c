#include <stdio.h>

int main() {
int n;
	int matrix[100][100],transpose[100][100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
    for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			transpose[j][i] = matrix[i][j];
		}
		}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%d ", transpose[i][j]);
		}
	
	
		printf("\n");
	}
    /*Enter your code here.
	 Readinput from STDIN.
	Print output toSTDOUT*/
	return 0;
}
