#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char alphabet;

	printf("���ĺ� �Է� : ");
	scanf_s("%c", &alphabet);

	if (alphabet >= 'A' && alphabet <= 'Z')
	{
		printf("�Է��� ���ĺ� %c��(��) \"�빮��\"�̰�\n", alphabet);
		printf("�ƽ�Ű�ڵ� ���� %d�Դϴ�.\n", alphabet);
	}
	else
	{
		printf("�Է��� ���ĺ� %c��(��) \"�ҹ���\"�̰�\n", alphabet);
		printf("�ƽ�Ű�ڵ� ���� %d�Դϴ�.\n", alphabet);
	}

	return 0;
}