#include <stdio.h>

int main(void)

{
	int kor = 3;
	int eng = 5;
	int mat = 4;
	int credits;
	int res;

	float kors = 3.8;
	float engs = 4.4;
	float mats = 3.9;

	credits = kor + eng + mat;

	float grade = (kor * kors + eng * engs + mat * mats) / credits;
	printf("your grade:%.1lf\n", grade);
	res = (grade > 4.0 && credits >= 10);
	printf("%d", res);
	return 0;
}
