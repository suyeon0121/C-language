#pragma warning(disable : 4996)
#include <stdio.h>

void in(float i);
void me(float m);

int main(void)
{
	char op;
	float su = 0;

	do {
		printf("A. ��ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷�\n");
		printf("B. ���� �����ͷ� ȯ���ϴ� ���α׷�\n");
		printf("Q. ���α׷� ����\n\n");
		printf("���� : ");
		scanf_s("%c", &op);
		getchar();

		if (op == 'A' || op == 'a')
		{
			printf("A. ��ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷�\n");
			printf("��> ��ġ(inch)�� �Է��ϼ��� : ");
			scanf_s("%f", &su);
			printf("\n[ ��ġ�� ��Ƽ���ͷ� ȯ�� �Լ� ȣ��]\n\n");
			in(su);
		}
		else if (op == 'B' || op == 'b')
		{
			printf("B. ���� �����ͷ� ȯ���ϴ� ���α׷�\n");
			printf("��> ���� �Է��ϼ��� : %f", su);
			scanf_s("%f", &su);
			printf("\n[ ���� �����ͷ� ȯ�� �Լ� ȣ��]\n\n");
			me(su);
		}
		else if (op == 'Q' || op == 'q')
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("���ĺ��� A, B, Q�� ���˴ϴ�.\n");
			continue;
		}
	} while (1);
}

void in(float i)
{
	float result;
	result = i * 2.5399;

	printf("��> %.2f��ġ(inch)�� %.2f��Ƽ����(cm)\n\n", i, result);
	printf("���������� ȯ���� �����Ͽ����ϴ�.\n\n");
}

void me(float m)
{
	float result;
	result = m * 3.3058;

	printf("��> %.2f��Ƽ����(cm)�� %.2f��ġ(inch)\n\n", m, result);
	printf("���������� ȯ���� �����Ͽ����ϴ�.\n\n");
}