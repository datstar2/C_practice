/* �о� ���� �������� ¦���ΰ� Ȧ���ΰ�? */
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
