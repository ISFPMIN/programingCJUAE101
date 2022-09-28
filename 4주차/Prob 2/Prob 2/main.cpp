#include <stdio.h>
#define MAXSIZE1 95
#define MINSIZE1 85
#define MAXSIZE2 100
#define MINSIZE2 90

int main(void)
{
	int chestsize = 0;
	int age = 0;
	char size;

	printf("Input your chestsize and age: ");
	scanf_s("%d %d", &chestsize, &age);

	if (age < 20) //age less than 20
	{
		if (chestsize < MINSIZE1)
		{
			size = 'S';
		}
		else if (chestsize >= MINSIZE1 && chestsize < MAXSIZE1) // 90 =< chestsize < 100
		{
			size = 'M';
		}
		else if (chestsize >= MAXSIZE1)
		{
			size = 'L';
		}
	}

	else if (age >= 20) // age over 20
	{
		if (chestsize < MINSIZE2)
		{
			size = 'S';
		}
		else if (chestsize >= MINSIZE2 && chestsize < MAXSIZE2) // 90 =< chestsize < 100
		{
			size = 'M';
		}
		else if (chestsize >= MAXSIZE2)
		{
			size = 'L';
		}
	}
	printf("your size :%c", size);

	return 0;
}