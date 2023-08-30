#include <stdio.h>
#define R 9
#define C 9

int main(void)
{
	int dan, cnt;
	int gugu[R][C];

	printf("■ 2차원 배열로 2 ~ 9단까지 출력하는 프로그램\n");

	for (dan = 2; dan <= R; dan++)
	{
		printf("< %d단 출력 > \n", dan);

		for (cnt = 1; cnt <= C; cnt++)
		{
			gugu[dan][cnt] = dan * cnt;
			printf("%3d X %d = %02d\n", dan, cnt, gugu[dan][cnt]);
		}
		printf("\n");
	}
	printf("2 ~ 9단까지 출력 완료!");
	return 0;
}