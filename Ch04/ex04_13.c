#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char input_alpha;

	printf("���ĺ� �Է� : ");
	scanf_s("%c", &input_alpha, sizeof(input_alpha));

	printf("�Է��� ���ĺ� ��� : %c\n", input_alpha);
	printf("�Է��� ���ĺ��� �ƽ�Ű�ڵ尪 : %d\n", input_alpha);
	return 0;
}