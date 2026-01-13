#include<stdio.h>

void area_peri(float, float*, float*);
  
int main() {
	float radius, area, perimeter;
   
    // Read radius
    scanf("%f", &radius);
   
    // Function call
    area_peri(radius, &area, &perimeter);
   
    // Print results
    printf("%.2f\n", area);
    printf("%.2f\n", perimeter);
   
    return 0;
	
	
}

void area_peri(    float radius, float* area, float* perimeter    ) {
	
	float pi = 3.14;
    *area = pi * radius * radius;           // area = πr²
    *perimeter = 2 * pi * radius;  
	
	
	
}
