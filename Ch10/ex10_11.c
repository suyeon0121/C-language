#pragma warning(disable : 4996)
#include <stdio.h>
#define AL 7

int main(void)
{
	int s_list[AL] = { 5, 4, 1, 3, 2, 7, 6 };
	int input, cnt;
	char yn;

	printf("�ʱ�> �迭 ���: 5 4 1 3 2 7 6\n");

	while (1)
	{
		printf("���� �Է�(1~7): ");
		scanf_s("%d", &input);
		printf("\n");

		if (input < 1 || input > 7)
		{
			printf("�� �Է� ����!\n");
			printf("�ٽ� �Է��ϼ���.\n");
			continue;
		}

		for (cnt = 0; cnt < AL; cnt++)

			if (s_list[cnt] == input)
			{
				printf("���� Ž�� Ƚ�� : %dȸ\n", cnt + 1);
				printf("Ž�� ���� �ε��� : %d\n", cnt);
			}
	re_ch:

		printf("���α׷��� �ٽ� �����ұ��? (Y/N) : ");
		scanf_s(" %c", &yn);

		if (yn == 'N' || yn == 'n')
			break;
		else if (yn == 'Y' || yn == 'y')
			continue;
		else
		{
			printf("���ĺ� �Է� ����!\n");
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
			goto re_ch;
		}
	}
	return 0;
}