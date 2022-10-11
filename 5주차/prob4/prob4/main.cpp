#include <stdio.h>

int rec_func(int c); //1부터 c까지의 합을 반환하는 함수

int main(void)
{
	int a;

	printf("Input your number : ");
	scanf_s("%d", &a);

	a = rec_func(a); //a를 함수로 설정=a라는 변수 자체를 a까지의 합으로 설정
	printf("result = %d\n", a); //1부터 a까지의 합 결과 출력

	return 0;
}

int rec_func(int c)
{
	if (c == 1) //입력한 수가 1일 때
		return 1; //1을 출력
	else //입력한 수가 1이 아닐 때
		return (c + rec_func(c - 1)); //입력한 수부터 -1인 수를 반복하며 더함
}