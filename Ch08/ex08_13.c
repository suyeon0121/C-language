#pragma warning(disable : 4996)
#include <stdio.h>

char Alpha();

int main(void)
{
	char show;
	printf("����� ���� �Լ����� �Է��� ���ĺ� ����\n");

	show = Alpha();
	printf("\n[main() �Լ� ����]\n\n");
	printf("��> ���޹��� ���ĺ� : %c\n", show);
	printf("��> �ƽ�Ű�ڵ尪 : %d\n", show);
	return 0;
}

char Alpha()
{
	char ch;
	printf("\n[Alpha() �Լ� ����]\n\n");
	printf("��> ���ĺ� �Է� : ");
	scanf_s("%c", &ch);
	return ch;
}