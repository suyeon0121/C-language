#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char op;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &op);

	if (op >= 'A' && op <= 'Z')
	{
		printf("�Է��� %c��(��) \"���ĺ� �빮��\"�Դϴ�.", op);
	}
	else if (op >= 'a' && op <= 'z')
	{
		printf("�Է��� %c��(��) \"���ĺ� �ҹ���\"�Դϴ�.", op);
	}
	else if (op >= '0' && op <= '9')
	{
		printf("�Է��� %c��(��) \"����\"�Դϴ�.", op);
	}
	else 
		printf("�Է��� %c��(��) \"��Ÿ ����\"�Դϴ�.", op);

	return 0;
}