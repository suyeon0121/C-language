#include <stdio.h>
#define R 9
#define C 9

int main(void)
{
	int dan, cnt;
	int gugu[R][C];

	printf("�� 2���� �迭�� 2 ~ 9�ܱ��� ����ϴ� ���α׷�\n");

	for (dan = 2; dan <= R; dan++)
	{
		printf("< %d�� ��� > \n", dan);

		for (cnt = 1; cnt <= C; cnt++)
		{
			gugu[dan][cnt] = dan * cnt;
			printf("%3d X %d = %02d\n", dan, cnt, gugu[dan][cnt]);
		}
		printf("\n");
	}
	printf("2 ~ 9�ܱ��� ��� �Ϸ�!");
	return 0;
}