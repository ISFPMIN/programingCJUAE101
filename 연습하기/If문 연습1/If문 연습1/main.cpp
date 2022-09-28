#include <stdio.h>

int main(void)
{
	double a = 100;
	double b = 200;
	double c = 0.001;

	if (a > 50)
	{
		a = a * c;
		b = b * c;
	}

	printf("a : %.1lf\nb : %.1lf\n", a, b);

	return 0;
}