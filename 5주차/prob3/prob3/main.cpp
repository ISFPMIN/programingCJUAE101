#include <stdio.h>

int add(int a, int y);
int sub(int a, int y);
int mul(int a, int y);
int div(int a, int y);
int rem(int a, int y);

int main(void)

{
	int a, b, res;
	char symbol;

	printf("Input binomial:");
	scanf_s("%d%c%d", &a, &symbol, 1, &b);

	switch (symbol)
	{
	case '+':
		res = add(a, b);
		break;
	case '-':
		res = sub(a, b);
		break;
	case '*':
		res = mul(a, b);
		break;
	case '/':
		res = div(a, b);
		break;
	case '%':
		res = rem(a, b);
		break;
	default:
		printf("Input a valid binomial\n");//when you input wrong symbol
	}
	
	printf("%d%c%d = %d\n", a, symbol, b, res);
	return 0;
}

int add(int x, int y) //symbol +
{
	int temp;

	temp = x + y;

	return temp;
}
int sub(int x, int y) //symbol -
{
	int temp;

	temp = x - y;

	return temp;
}
int mul(int x, int y) //symbol *
{
	int temp;

	temp = x * y;

	return temp;
}
int div(int x, int y) //symbol /
{
	int temp;

	temp = x / y;

	return temp;
}
int rem(int x, int y) //symbol %
{
	int temp;

	temp = x % y;

	return temp;
}