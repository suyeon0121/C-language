#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	int num;
	char s[30];
	char op;

	do
	{
		printf("\n�� ���ڿ��� �������� �Ǽ������� ��ȯ�ϴ� ���α׷�\n");
		printf("���ڿ��� 30����Ʈ �̳��� �Է� : ");
		gets_s(s, sizeof(s));

		printf("�Է� ���ڿ� : \"%s\"\n", s);
		num = atoi(s);
		printf("���ڿ� -> ���������� ��ȯ : %d\n", num);

	re:
		printf("���α׷��� ��� �����ұ��? (Y/N) : ");
		op = _getche();

		if (op == 'Y' || op == 'y')
		{
			printf("\n");
			continue;
		}
		else if (op == 'N' || op == 'n')
		{
			printf("\n���α׷��� �����մϴ�.\n");
			return 0;
		}
		else
		{
			printf("\n���ĺ� �Է� ����!\n");
			printf("���ĺ��� �ٽ� �Է��ϼ���...\n");
			goto re;
		}

	} while (1);

}