#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int op;

	printf("���� �Է� : ");
	op = getchar();

	if (isalpha(op))
	{
		printf("�Է��� ���ڴ� ���ĺ��� �½��ϴ�.\n");

		if (isupper(op))
			printf("�Է��� %c��(��) ���ĺ� �빮���Դϴ�.\n", op);
		else
			printf("�Է��� %c��(��) ���ĺ� �ҹ����Դϴ�.\n", op);
	}
	else
		printf("�Է��� %c��(��) ���ĺ��� �ƴմϴ�.\n", op);

	return 0;
}