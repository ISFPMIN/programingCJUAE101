#include <stdio.h>

int main(void)
{
	int a = 0;
	int i, j, pn; //prime number:�Ҽ�, i�� ���� ������ ������ �����ϴ� ��, j�� �Ҽ����� �˱� ���� ���� ��
	int count = 0; //��������� �� �� �� ������ ����

	printf("Input number over than 2:");
	scanf_s("%d", &a);

	for (i = 2; i <= a; i++)
	{
		pn = 1; //i�� ���� �Ҽ���� ����
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
			{
				pn = 0;
				break;
			}
		}
		if (pn == 1)
		{
			printf("%5d", i); //5���� �� �Է�
			count++;
			if ((count % 5) == 0) //5���� ���ڰ� �ۼ��Ǹ�
			{
				printf("\n"); //���� �ٷ� �̵�
			}

		}
	}
	return 0;

} 