#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int cnt, size, choice;
	char* task[] = {
		"Desk",
		"Computer",
		"Books",
		"USB",
		"EXIT"
	};

	printf("������ �迭�� ��� ����(���� : 5)\n");

	size = sizeof(task) / sizeof(task[0]);

	for (cnt = 0; cnt < size; cnt++)
		printf("%d.%s\n", cnt + 1, task[cnt]);

	while (1)
	{
		printf("\n���� �Է�(1 ~ 5) : ");
		scanf_s("%d", &choice);

		if (choice < 1 || choice > 5)
		{
			printf("�Է� ���� ����!\n");
			continue;
		}
		else if (choice == 5)
			break;
		else
			printf("������ �ܾ�� \"%s\"�Դϴ�\n", task[choice - 1]);
	}
	return 0;
}