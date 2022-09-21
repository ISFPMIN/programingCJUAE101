#include <stdio.h>

int main(void)

{
	int kor = 3;
	int eng = 5;
	int mat = 4;
	int res;

	float kors = 3.8;
	float engs = 4.4;
	float mats = 3.9;

	float grade = (kor * kors + eng * engs + mat * mats) / (kor + eng + mat);
	printf("your grade:%.1lf\n", grade);

	return 0;
}