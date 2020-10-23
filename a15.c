/* 읽어 들인 정숫값이 짝수인가 홀수인가? */
#include <stdio.h>

int main(void)
{
	int no;
	puts("input number.");
	scanf("%d", &no);
	
	switch (no%2){
	case 0 : printf("an even number."); break;
	case 1 : printf("odd number."); break;
	}
	

	return 0;
}
