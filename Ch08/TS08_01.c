#pragma warning(disable : 4996)
#include <stdio.h>

void in(float i);
void me(float m);

int main(void)
{
	char op;
	float su = 0;

	do {
		printf("A. 인치를 센티미터로 환산하는 프로그램\n");
		printf("B. 평을 평방미터로 환산하는 프로그램\n");
		printf("Q. 프로그램 종료\n\n");
		printf("선택 : ");
		scanf_s("%c", &op);
		getchar();

		if (op == 'A' || op == 'a')
		{
			printf("A. 인치를 센티미터로 환산하는 프로그램\n");
			printf("문> 인치(inch)를 입력하세요 : ");
			scanf_s("%f", &su);
			printf("\n[ 인치를 센티미터로 환산 함수 호출]\n\n");
			in(su);
		}
		else if (op == 'B' || op == 'b')
		{
			printf("B. 평을 평방미터로 환산하는 프로그램\n");
			printf("문> 평을 입력하세요 : %f", su);
			scanf_s("%f", &su);
			printf("\n[ 평을 평방미터로 환산 함수 호출]\n\n");
			me(su);
		}
		else if (op == 'Q' || op == 'q')
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("알파벳은 A, B, Q만 허용됩니다.\n");
			continue;
		}
	} while (1);
}

void in(float i)
{
	float result;
	result = i * 2.5399;

	printf("답> %.2f인치(inch)는 %.2f센티미터(cm)\n\n", i, result);
	printf("성공적으로 환산을 수행하였습니다.\n\n");
}

void me(float m)
{
	float result;
	result = m * 3.3058;

	printf("답> %.2f센티미터(cm)는 %.2f인치(inch)\n\n", m, result);
	printf("성공적으로 환산을 수행하였습니다.\n\n");
}