#include <stdio.h>

int main(void)

{
	int a = 0;
	int j;
	printf("input number 2~9:"); //���ϴ� �ܼ� �Է�
	scanf_s("%d", &a);

	if (a > 1 && a < 10) //�������� �� �Է� ��
	{

		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", a, j, a * j);
		}
	}

	else //���������� �� �Է� ��
	{
		printf("Input 2~9");
	}
	return 0;
}