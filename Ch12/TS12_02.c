#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char* fruit[] = { "Apple", "Tomato", "Pineapple" };
	int cnt;

	do
	{
		printf("1. Apple\n");
		printf("2. Tomato\n");
		printf("3. Pineapple\n");
		printf("4. Exit\n");
		printf("���� : ");
		scanf_s("%d", &cnt);

		if (cnt == 1)
		{
			printf("������ ������ \"Apple\"�Դϴ�.\n\n");
		}
		else if (cnt == 2)
		{
			printf("������ ������ \"Tomato\"�Դϴ�.\n\n");
		}
		else if (cnt == 3)
		{
			printf("������ ������ \"Pineapple\"�Դϴ�.\n\n");
		}
		else if (cnt == 4)
		{
			printf("���α׷��� �����մϴ�.\n\n");
			break;
		}
		else
		{
			printf("���ڴ� 1, 2, 3, 4�� ���˴ϴ�.\n\n");
			continue;
		}

	} while (1);
	return 0;
}
