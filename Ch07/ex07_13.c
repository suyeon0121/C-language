#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt = 1, hap = 0;

	printf("������ ���� ���ұ�� : ");
	scanf_s("%d", &su);

	do {
		hap += cnt;
		printf("%dȸ ���� : �������� %d\n", cnt, hap);
		cnt++;
	} while (cnt <= su);
	printf("1���� %d���� ������ : %d\n", su, hap);
	return 0;
}