#include<stdio.h>//for printf() and scanf()
#include<math.h>//For sqrt() function

int main() {
	//Declare variable to store cofficients and calculated values
	double a,b,c;//Cofficents of the quadratic equation
	double discriminant;   
	double root1,root2;
	double realPart,imagPart;
	printf("Enter coefficients a, b and c: ");
	scanf("%lf %lf %lf",&a,&b,&c);

	discriminant=b*b-4*a*c;
	if(discriminant>0){
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("root1 = %.2lf and root2 = %.2lf\n",root1,root2);
	}
	else if(discriminant==0){
		root1=-b/(2* a);
		printf("root1 = root2 = %.2lf;\n",root1);
	}
	else{
		realPart=-b/(2*a);
		imagPart=sqrt(-discriminant)/(2*a);
		printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi\n",
			realPart,imagPart,realPart,imagPart);
	}
	return 0;
}




