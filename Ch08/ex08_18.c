#include <stdio.h>

int Call_val(int su);

int main(void)
{
	int num = 100, after;

	printf("[main() �Լ� ����]\n");
	printf("��> �Լ� ȣ���ϱ� ���� �� : %d\n\n", num);

	after = Call_val(num);

	printf("[main() �Լ� ����]\n");
	printf("��> �Լ� ȣ�� ���� �� : %d\n\n", after);
	return 0;
}

int Call_val(int su)
{
	printf("[Call_val() �Լ� ����]\n");
	printf("����> ���޹��� �� 100�� 5�� ���Ͽ� ��ȯ\n\n");

	su += 5;
	return su;
}