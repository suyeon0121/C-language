#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char blood;

	printf("A�� : A �Ǵ� a\n");
	printf("B�� : B �Ǵ� b\n");
	printf("AB�� : C �Ǵ� c\n");
	printf("O�� : O �Ǵ� o\n");
	printf("�������� �ش��ϴ� ���ĺ� �Է� : ");
	scanf_s("%c", &blood);

	if (blood == 'A' || blood == 'a')
	{
		printf("A��\n");
		printf("�ε巴�� ������ ����\n");
	}
	else if (blood == 'B' || blood == 'b')
	{
		printf("B��\n");
		printf("���� ��ȭ�� �ΰ��� ����\n");
	}
	else if (blood == 'C' || blood == 'c')
	{
		printf("AB��\n");
		printf("�������� ������ ���� ����\n");
	}
	else if (blood == 'O' || blood == 'o')
	{
		printf("O��\n");
		printf("Ȱ���ϰ� ��Ȱ�� ����\n");
	}
	else
	{
		printf("������� �ʴ� �����Դϴ�.\n");
		printf("��� ���� �������� A, B, C, O�� ���˴ϴ�.\n");
		printf("���α׷��� �ٽ� �����ϼ���.\n");
		return 0;
	}
	return 0;
}