#include <stdio.h>

struct  Distance  {
int feet;
      float inch;


}     ;

int main() {
	struct Distance d1,d2,sum;
	// take first distance input
	printf("Enter 1st distance \n");
	printf("feet: ");
	scanf("%d", &d1.feet);
	printf("inch: ");
	    scanf("%f", &d1.inch);
	
	// take second distance input
	printf("Enter 2nd distance \n");
	printf("feet: ");
	scanf("%d", &d2.feet);
	printf("inch: ");
	scanf("%f", &d2.inch);
	sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
	// convert inches to feet if greater than 12
	if (sum.inch >= 12.0) {
        sum.inch -= 12.0;
        sum.feet++;

			}
	printf("Sum of distances = %d\'-%.1f\"",  sum.feet , sum.inch);
	return 0;
}
