#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int cnt = 1;
	char op;

	while (1)
	{
		printf("���ĺ� �Է� : ");
		scanf_s("%c", &op);

		if (op == 'Q' || op == 'q')
		{
			printf("�� %dȸ �����Ͽ� ���ĺ��� ã�ҽ��ϴ�.\n", cnt);
			printf("ã�� ���ĺ��� ��ҹ��� ���� ���� \'Q\'�Դϴ�.\n");
			break;
		}
		else
		{
			printf("ã�� ���ĺ��� �ƴմϴ�. ���ĺ��� �ٽ� �Է��ϼ���.\n\n");
			getchar();
		}
		cnt++;
	}
	return 0;
}