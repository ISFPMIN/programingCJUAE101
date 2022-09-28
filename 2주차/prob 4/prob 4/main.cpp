#include <stdio.h>

int main(void)
{
	double weight=0.0;
	double height=0.0;
	double BMI = 0.0;
	printf("Input your HEIGHT and WEIGHT:, \n");
	scanf_s("%lf%lf", &height, &weight); //%lf%lf H, W at a time
	BMI = weight / ((height / 100) * (height / 100)); //bmi calculate
	printf("Your BMI : % .3lf\n", BMI);
	((BMI > 20) && (BMI < 25)) ? printf("Your weight is normal") : printf("You need to take care of your weight");
	return 0;
}