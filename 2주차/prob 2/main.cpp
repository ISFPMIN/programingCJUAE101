#include <stdio.h>

int main(void)
{
	char ch;

	printf("type word:");
	scanf_s("%c", &ch);
	printf("ASCII CODE:%d\n", ch);

	return 0;
}