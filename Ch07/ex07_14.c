#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int jumsu, cnt = 1;
	char op;

	do {
		printf("<%dȸ ����>\n", cnt);
		printf("���α׷��� �����ϰڽ��ϱ�? (Y/N) : ");

		scanf_s("%c", &op);

		if (op == 'N' || op == 'n')
		{
			printf("�� %dȸ ���� �� �����մϴ�.\n", cnt);
			break;
		}
		else if (op == 'Y' || op == 'y')
		{
		re_jumsu:
			printf("���� �Է� : ");
			scanf_s("%d", &jumsu);

			if (jumsu <= 100 && jumsu >= 90)
				printf("A����\n\n");
			else if (jumsu < 90 && jumsu >= 80)
				printf("B����\n\n");
			else if (jumsu < 80 && jumsu >= 70)
				printf("C����\n\n");
			else if (jumsu < 70 && jumsu >= 60)
				printf("D����\n\n");
			else if (jumsu < 60 && jumsu >= 50)
				printf("F����\n\n");
			else {
				printf("���� %d��(��) ��� ������ �ƴմϴ�.\n", jumsu);
				printf("������ �ٽ� �Է��ϼ���.\n");
				goto re_jumsu;
			}
			getchar();
			cnt++;
		}
		else
		{
			printf("�Է��� ���ĺ��� %c��(��) ������ �ʽ��ϴ�.\n", op);
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n\n");
			getchar();
			cnt++;
		}
	} while (1);
	return 0;
}