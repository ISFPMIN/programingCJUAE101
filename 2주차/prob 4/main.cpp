#include <stdio.h>

int main(void)
{
	double weight = 61;
	double height = 179.3;
	int res;

	double BMI = weight / ((height / 100) * (height / 100));
	printf("����� BMI�� % .3lf", BMI);
	printf("��")
}