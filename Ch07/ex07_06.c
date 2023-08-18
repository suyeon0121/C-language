#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int dan, cnt, gob;

replay:
	printf("알고 싶은 구구단(2~99) 입력 : ");
	scanf_s("%d", &dan);

	if (dan >= 100 || dan < 2) {
		printf("허용하는 구구단 범위가 아닙니다.\n");
		printf("프로그램을 다시 실행하십시오.\n\n");
		goto replay;
	}
	else {
		for (cnt = 1; cnt <= 9; cnt++) {
			gob = dan * cnt;
			printf("%d x %d = %d\n", dan, cnt, gob);
		}
		printf("%d단을 출력하였습니다.\n", dan);
	}
	return 0;
}