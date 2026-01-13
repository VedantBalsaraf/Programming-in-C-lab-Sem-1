#include<stdio.h>

int main(){
int n;
	scanf("%d",&n);

	int arr[n];
	int posSum=0,negSum=0;

	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			posSum+=arr[i];
	}else if(arr[i]<0){
		negSum+=arr[i];
	}
	}
	printf("%d\n",posSum);
	printf("%d\n",negSum);
	return 0;
}
