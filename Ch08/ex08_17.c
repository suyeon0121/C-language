#pragma warning(disable : 4996)
#include <stdio.h>

void Pr_ch(char ch, int num);

int main(void)
{
	char input;
	int n;

	printf("�Է� ���� : T 8 (���ĺ� [����] ���� �Է�)\n");
	printf("\n[main() �Լ� ����]\n\n");
	printf("��> ���ڿ� Ƚ��(����) �Է� : ");

	scanf_s("%c %d", &input, sizeof(input), & n);
	Pr_ch(input, n);
	return 0;
}

void Pr_ch(char ch, int num)
{
	int cnt;

	printf("\n[Pr_ch() �Լ� ����]\n\n");
	printf("��> ");

	for (cnt = 1; cnt <= num; cnt++)
		printf(" %c ", ch);

	printf(" : %dȸ ��� �Ϸ�\n", cnt - 1);
}