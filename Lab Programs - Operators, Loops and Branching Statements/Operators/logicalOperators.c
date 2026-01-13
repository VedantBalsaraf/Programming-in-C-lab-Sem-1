#include<stdio.h>


int main(){
	int n1,n2;
	printf("Enter numbers: ");
	scanf("%d%d",&n1,&n2);
	if(n1>0&&n2>0)
		printf("Both are positive\n");
	else
		printf("Both are not positive\n");
	if(n1==5||n2==5)
		printf("%d or %d = 5\n",n1,n2);
	else
		printf("%d,%d != 5\n",n1,n2);

	if(!(n1>10))
		printf("%d <= 10\n",n1);
	else
		printf("%d > 10\n",n1);
	return 0;
	
}
