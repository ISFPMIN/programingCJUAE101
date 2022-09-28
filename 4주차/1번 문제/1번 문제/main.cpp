#include <stdio.h>

#define MINSIZE 90
#define MAXSIZE 100

int main(void)

{
	int chestsize = 0;
	char size;

	printf("input your chestsize:");
	scanf_s("%d", &chestsize);

	if (chestsize <= MINSIZE)
	{
		size = 'S';
	}
	else if (chestsize > MINSIZE && chestsize <= MAXSIZE)
	{
		size = 'M';
	}
	else if (chestsize > MAXSIZE)
	{
		size = 'L';
	}

	printf("your size : %c", size);
}