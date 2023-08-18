#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int num, a;
	int* poval;

	printf("키보드로 정수 1개를 입력하시오 : ");
	scanf_s("%d", &num);

	poval = &num;
	a = *poval;

	printf("키보드로 입력한 값이 저장된 주소(16진수 표기) : %X\n", poval);
	printf("포인터 변수 *poval에 저장된 값(10진수 표기) : %d", a);
	return 0;
}