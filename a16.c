/* 읽어 들인 월의 계절을 출력 */
#include <stdio.h>

int main(void)
{
	int month;
	puts("input month.");
	scanf("%d", &month);
	
	switch (month){
	case 3 : 
	case 4 :
	case 5 : puts("Spring"); break;
	case 6 :
	case 7 :
	case 8 : puts("Summer"); break;
	case 9 :
	case 10:
	case 11: puts("Fall"); break;
	case 12:
	case 1 :
	case 2 : puts("Winter"); break;
	default: puts("No month!"); break;
	}
	

	return 0;
}
