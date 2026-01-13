#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Enter the number of values: ");
	scanf("%d",&n);
	double arr[n], sum=0.0,mean, variance=0.0, stdDeviation;
	printf("Enter values : ");
	for (int i = 0; i<n; i++){
		scanf("%lf",&arr[i]);
		sum+=arr[i];
	}
	mean=sum/n;
	for (int i=0;i<n;i++){
		variance+=pow(arr[i]-mean,2);
	}
	variance/=n;
	stdDeviation=sqrt(variance);
	printf("Mean = %.2lf\n",mean);
	printf("Variance = %.2lf\n",variance);
	printf("Deviation = %.2lf\n",stdDeviation);
	return 0;
}
