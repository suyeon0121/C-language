#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int op;

	printf("���� �Է� : ");
	op = getchar();

	if (isalnum(op))
		printf("�Է��� %c��(��) ���� �Ǵ� ���ĺ��Դϴ�.\n", op);
	else
		printf("�Է��� %c��(��) ���� �Ǵ� ���ĺ��� �ƴմϴ�.\n", op);
	return 0;
}