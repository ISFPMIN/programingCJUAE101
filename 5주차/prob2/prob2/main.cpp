#include <stdio.h>

int main(void)
{
	int a = 0;
	int i, j, pn; //prime number:소수, i는 이후 설정할 수까지 존재하는 수, j는 소수인지 알기 위해 나눌 수
	int count = 0; //결과값에서 한 줄 당 숫자의 개수

	printf("Input number over than 2:");
	scanf_s("%d", &a);

	for (i = 2; i <= a; i++)
	{
		pn = 1; //i의 값이 소수라고 가정
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
			printf("%5d", i); //5개의 수 입력
			count++;
			if ((count % 5) == 0) //5개의 숫자가 작성되면
			{
				printf("\n"); //다음 줄로 이동
			}

		}
	}
	return 0;

} 