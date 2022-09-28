#include <stdio.h>

int main(void)

{
	double a = 0.0;

	printf("Input any number:\n");
	scanf_s("%lf", a);

	if (a > 5)
	{
		a = ++a;
	}

	else
	{
		a = 0;
	}

	printf("If your number was bigger than 5, +1 unless a=0, %d\n", a);

	return 0;
}