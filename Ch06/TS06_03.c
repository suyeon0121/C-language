#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char season;

	printf("������ ������ ���ĺ� �Է� : ");
	scanf_s("%c", &season);

	switch (season)
	{
	case 'A':
	case 'a':
		printf("��\n");
		printf("���� ���۴�.");
		break;

	case 'S':
	case 's':
		printf("����\n");
		printf("������ �Ѵ�.");
		break;

	case 'D':
	case 'd':
		printf("����\n");
		printf("�߼��� �Ѵ�.");
		break;

	case 'F':
	case 'f':
		printf("�ܿ�\n");
		printf("��Ű�� ź��.");
		break;

	default:
		printf("������ �ʴ� ���ĺ��Դϴ�.\n");
		printf("��ҹ��� ���� ���� A, S, D, F�� ����մϴ�.\n");
		printf("���α׷��� �ٽ� �����ϼ���.");
	}

	return 0;
}