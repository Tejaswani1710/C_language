// 
//

#include<stdio.h>
 double convert( float cm)
{
	double in = 0.3937 * cm;
	double feet = 0.0328 * cm;
	printf(" %.2f Inches\n", in);
	printf(" %.2f feets\n", feet);
	return 0 ;
}

int main ()
{
	float cm;
	printf("Enter length in cm:");
	scanf("%f", &cm);

	convert(cm);
	return 0;
}


