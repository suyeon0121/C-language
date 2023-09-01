#include <stdio.h>

void menu(void);
int hap(int a, int b);
int cha(int a, int b);
int gob(int a, int b);
int na(int a, int b);

void menu(void)
{
	int size, cnt;
	char* ma[] = { "����", "����", "����", "������", "����" };
	size = sizeof(ma) / sizeof(ma[0]);
	for (cnt = 0; cnt < size; cnt++)
		printf("%d.%s \n", cnt, ma[cnt]);
}

int main(void)
{
	int choice, result, a, b;
	int(*fp[4])(int, int) = { hap, cha, gob, na };
	while (1)
	{
		menu();
	re:
		printf("����(0 ~ 4) : ");
		scanf_s("%d", &choice);
		if (choice < 0 || choice > 4)
		{
			printf("\n�Է� ����\n");
			printf("�ٽ� �����ϼ���.\n");
			goto re;
		}
		else if (choice == 4)
			break;
		else
		{
			printf("���� 2�� �Է�(��> 10 20) : ");
			scanf_s("%d %d", &a, &b);
			result = fp[choice](a, b);
			printf("���� ��� : %d\n", result);
		}
		printf("���α׷� ���� �Ϸ�");
	}
	printf("\n���α׷� ����\n");
	return 0;
}

int hap(int a, int b)
{
	int result;
	printf("\n[���� hap() �Լ� ����]\n\n");
	result = a + b;
	return result;
}

int cha(int a, int b)
{
	int result;
	printf("\n[���� cha() �Լ� ����]\n\n");
	result = a - b;
	return result;
}

int gob(int a, int b)
{
	int result;
	printf("\n[���� gob() �Լ� ����]\n\n");
	result = a * b;
	return result;
}

int na(int a, int b)
{
	int result;
	printf("\n[������ na() �Լ� ����]\n\n");
	result = a / b;
	return result;
}