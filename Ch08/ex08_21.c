#pragma warning(disable : 4996)
#include <stdio.h>

int Sum(int cnt);

int main(void)
{
	int input, hap = 0;

	printf("[main() �Լ� ����]\n");
	printf("����> ������ ���ұ�� : ");
	scanf_s("%d", &input);

	printf("ȣ��> Sum() �Լ� ȣ��\n\n");
	printf("[Sum() �Լ� ȣ�� �Ϸ�]\n");
	
	hap = Sum(input);

	printf("����> Sum() �Լ����� 1���� %d���� ���� �հ� ����\n", input);
	printf("ȸ��> main() �Լ� ��ȯ\n\n");
	printf("[main() �Լ� ����]\n");
	printf("���> 1���� %d���� ���� �հ� : %d\n", input, hap);

	return 0;
}

int Sum(int cnt)
{
	if (cnt == 1)
		return 1;
	else
		return (cnt + Sum(cnt - 1));
}