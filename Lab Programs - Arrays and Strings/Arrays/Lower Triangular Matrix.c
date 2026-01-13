#include<stdio.h>
int main(){
	int m,n;
	int matrix [100][100];
	int is_lower_triangular=1;
	printf("Enter no of rows, columns: ");
	scanf("%d %d",&m,&n);
	if(m!=n){printf("Enter elements of matrix:\n");
	printf("Matrix must be square matrix\n");
			 return 0;
}
	printf ("Enter elements of matrix:\n");
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for (int i=0;i<m;i++){
		for(int j=i+1;j<n;j++){
			if(matrix[i][j]!=0){
				is_lower_triangular = 0;
				break;
			}
		}
		if(!is_lower_triangular) break;
	}
		
		if(is_lower_triangular){
			printf("Lower triangular matrix\n");
		}
		else{
			printf("Not a lower triangular matrix\n");
		}
		return 0;
	}
