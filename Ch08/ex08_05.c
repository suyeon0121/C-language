#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>

int main(void)
{
	int choice;
	double result, num1, num2;

	do
	{
		printf("1.������ ��� ���α׷�\n");
		printf("2.������ ��� ���α׷�\n");
		printf("3.���α׷� ����\n");

		printf("��ȣ ����(1~3) : ");
		scanf_s("%d", &choice);
		printf("\n");

		switch (choice)
		{
		case 1:
			printf("1.������ ��� ���α׷�\n");
			printf("�Ǽ� �Է� : ");
			scanf_s("%lf", &num1);

			printf("���� �Ǽ� �Է� : ");
			scanf_s("%lf", &num2);
			result = pow(num1, num2);

			printf("%f�� %f�� ��� : %f\n\n", num1, num2, result);
			break;

		case 2:
			printf("2.������ ��� ���α׷�\n");
			printf("�Ǽ� �Է� : ");
			scanf_s("%lf", &num1);

			result = sqrt(num1);
			printf("%f�� ������ ��� : %f\n\n", num1, result);
			break;

		case 3:
			printf("���α׷��� �����մϴ�.\n");
			return 0;
			break;

		default:
			printf("���� ����! ���� 1, 2, 3 �߿��� �����ϼ���.\n\n");
			continue;
			break;
		}
	} while (1);
}