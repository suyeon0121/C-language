#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char op;

	do {
	reset:
		printf("���ĺ� �빮�� �Է� : ");
		scanf_s("%c", &op);
		getchar();

		if (op >= 'A' && op <= 'Z')
		{
			printf("�Է��� ���ĺ� %c��(��) �빮�ڰ� �½��ϴ�.\n", op);
			printf("�����ϼ̽��ϴ�.\n");
			break;
		}
		else
		{
			printf("�Է��� ���ĺ� %c��(��) �빮�ڰ� �ƴմϴ�.\n", op);
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
			goto reset;
		}
	} while (1);
	return 0;
}