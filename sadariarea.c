/* 정수값 3개중 최솟값 구하기 */
#include <stdio.h>

int main(void)
{
	int n1, n2, diff ;
	printf("input no\n");
	scanf("%d", &n1);
	scanf("%d", &n2);

	(n1 < n2) ? (diff = n2 -n1) : (diff = n1 - n2);

	if (diff > 10)
		printf("diff is above 11");
	else
		printf("diff is below 10");
	
	return 0;
}
