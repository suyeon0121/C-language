#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PT 7

int main(void)
{
	int ex[PT];
	int cnt;

	printf("1~500 사이 숫자를 랜덤 출력\n");
	srand((unsigned)time(NULL));

	for (cnt = 0; cnt < PT; cnt++)
		ex[cnt] = 1 + (rand() % 500);

	for (cnt = 0; cnt < PT; cnt++)
		printf("ex[%d] = %d\n", cnt, ex[cnt]);

	return 0;
}