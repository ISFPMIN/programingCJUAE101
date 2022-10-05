#include <stdio.h>

int main(void)

{
	int a = 0;
	int j;
	printf("input number 2~9:");
	scanf_s("%d", &a);

	if (a > 1 && a < 10)
	{

		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", a, j, a * j);
		}
	}

	else
	{
		printf("Input 2~9");
	}
	return 0;
}