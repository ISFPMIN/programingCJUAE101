#include <stdio.h>

int main(void)

{
	int a, b, res;
	char symbol; //+-*/

	printf("Input binomial:"); // formula
	scanf_s("%d%c%d", &a, &symbol, 1, &b);

	switch (symbol)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/': 
		res = a / b;
		break;
	default:
		printf("Please input a valid binomial\n");//when you input wrong symbol
	}
	printf("%d%c%d = %d\n", a, symbol, b, res);
	return 0;
}