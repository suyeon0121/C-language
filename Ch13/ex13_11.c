#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int op;

	printf("���� �Է� : ");

	op = getchar();

	if (isalpha(op))
	{
		printf("�Է��� ���� %c��(��) ���ĺ��� �½��ϴ�.\n", op);

		if (islower(op))
		{
			op = toupper(op);
			printf("���ĺ��� �빮�� %c�� ��ȯ�մϴ�.\n", op);
		}
		else
		{
			op = tolower(op);
			printf("���ĺ��� �ҹ��� %c�� ��ȯ�մϴ�.\n", op);
		}
	}
	else
		printf("�Է��� %c��(��) ���ĺ��� �ƴմϴ�.\n", op);

	return 0;
}