#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>

int main(void)
{
	int choice;
	double result, num1, num2;

	do
	{
		printf("1.제곱값 출력 프로그램\n");
		printf("2.제곱근 출력 프로그램\n");
		printf("3.프로그램 종료\n");

		printf("번호 선택(1~3) : ");
		scanf_s("%d", &choice);
		printf("\n");

		switch (choice)
		{
		case 1:
			printf("1.제곱값 출력 프로그램\n");
			printf("실수 입력 : ");
			scanf_s("%lf", &num1);

			printf("지수 실수 입력 : ");
			scanf_s("%lf", &num2);
			result = pow(num1, num2);

			printf("%f의 %f승 결과 : %f\n\n", num1, num2, result);
			break;

		case 2:
			printf("2.제곱근 출력 프로그램\n");
			printf("실수 입력 : ");
			scanf_s("%lf", &num1);

			result = sqrt(num1);
			printf("%f의 제곱근 결과 : %f\n\n", num1, result);
			break;

		case 3:
			printf("프로그램을 종료합니다.\n");
			return 0;
			break;

		default:
			printf("선택 오류! 숫자 1, 2, 3 중에서 선택하세요.\n\n");
			continue;
			break;
		}
	} while (1);
}