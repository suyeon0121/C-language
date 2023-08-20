#pragma warning(disable : 4996)
#include <stdio.h>

void hanoi(int n, char a, char b, char c);

int main(void)
{
	int cnt = 3;
	char op;

	do {
		printf("[ ž�� ���� �̵��ϴ� �Լ� ȣ�� ]\n\n");
		hanoi(cnt, 'A', 'B', 'C');
		printf("\n ������ ��� �̵��Ͽ����ϴ�. \n");

	re:
		printf(" ���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y/N) : ");
		scanf_s("%c", &op);
		getchar();

		switch (op)
		{
		case 'Y':
		case 'y':
			continue;
			
		case 'N':
		case 'n':
			printf(" ���α׷��� �����մϴ�.\n");
			return 0;
			break;

		default:
			printf("\n %c��(��) ������ �ʴ� ���ĺ��Դϴ�.\n", op);
			printf("���ĺ��� �ٽ� �Է��ϼ���. \n\n");
			goto re;
		}
	} while (1);
}

void hanoi(int n, char a, char b, char c)
{
	if (n > 0)
	{
		hanoi(n - 1, a, c, b);
		printf("����%d : ž %c���� ž %c�� �̵� \n", n, a, c);
		hanoi(n - 1, b, a, c);
	}
}