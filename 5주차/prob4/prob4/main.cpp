#include <stdio.h>

int rec_func(int c); //1���� c������ ���� ��ȯ�ϴ� �Լ�

int main(void)
{
	int a;

	printf("Input your number : ");
	scanf_s("%d", &a);

	a = rec_func(a); //a�� �Լ��� ����=a��� ���� ��ü�� a������ ������ ����
	printf("result = %d\n", a); //1���� a������ �� ��� ���

	return 0;
}

int rec_func(int c)
{
	if (c == 1) //�Է��� ���� 1�� ��
		return 1; //1�� ���
	else //�Է��� ���� 1�� �ƴ� ��
		return (c + rec_func(c - 1)); //�Է��� ������ -1�� ���� �ݺ��ϸ� ����
}