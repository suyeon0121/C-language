#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 45

int main(void)
{
	int cnt;

	printf("1~45 �߿��� ���� 6�� ���\n");
	srand((unsigned)time(NULL));

	printf("srand( ) ��� : ");
	for (cnt = 1; cnt <= 6; cnt++)
		printf(" %d ", 1 + (rand() % NUM));

	printf("\n");
	return 0;
}