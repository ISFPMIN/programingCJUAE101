#include <stdio.h>

int main(void)

{
	int a = 0;
	int j;
	printf("input number 2~9:"); //원하는 단수 입력
	scanf_s("%d", &a);

	if (a > 1 && a < 10) //정상적인 수 입력 시
	{

		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", a, j, a * j);
		}
	}

	else //비정상적인 수 입력 시
	{
		printf("Input 2~9");
	}
	return 0;
}