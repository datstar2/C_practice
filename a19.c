#include <stdio.h>

int main(void)
{
	double no1, no2, no3;

	puts("input real number.");
	printf("real number 1:");	scanf("%lf", &no1);
	printf("real number 2:");	scanf("%lf", &no2);
	no3 = no1/no2;
	printf("%f", no3);

	return 0;
}