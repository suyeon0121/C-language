#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int dan, cnt, gob;

replay:
	printf("�˰� ���� ������(2~99) �Է� : ");
	scanf_s("%d", &dan);

	if (dan >= 100 || dan < 2) {
		printf("����ϴ� ������ ������ �ƴմϴ�.\n");
		printf("���α׷��� �ٽ� �����Ͻʽÿ�.\n\n");
		goto replay;
	}
	else {
		for (cnt = 1; cnt <= 9; cnt++) {
			gob = dan * cnt;
			printf("%d x %d = %d\n", dan, cnt, gob);
		}
		printf("%d���� ����Ͽ����ϴ�.\n", dan);
	}
	return 0;
}