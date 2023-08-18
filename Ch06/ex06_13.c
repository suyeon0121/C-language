#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int year, month, day;

	printf("������ �� �Է�(��> 2035 08) : ");
	scanf_s("%d %d", &year, &month);

	if (month > 12 || month < 1)
	{
		printf("%d���� ������� �ʴ� �����Դϴ�.\n", month);
		printf("���α׷��� �ٽ� �����ϼ���.\n");
	}
	else
	{
		switch (month)
		{
		case 2:
			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			{
				printf("����");
				day = 29;
			}
			else
			{
				printf("���");
				day = 28;
			}
			break;

		case 4: case 6: case 9: case 11:
			printf("���");
			day = 30;
			break;

		default:
			printf("���");
			day = 31;
		}
		printf(" : %d�� %02d���� %d�ϱ��� �ֽ��ϴ�.\n", year, month, day);
	}
	return 0;
}