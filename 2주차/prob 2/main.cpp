#include <stdio.h>

int main(void)
{
	char ch;

	printf("type word:\n");
	scanf_s("%c", &ch);
	printf("K:%C\n", ch); //can debug without
	printf("ASCII CODE:%d\n", ch);

	return 0;
}