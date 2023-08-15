#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char input_alpha;

	printf("알파벳 입력 : ");
	scanf_s("%c", &input_alpha, sizeof(input_alpha));

	printf("입력한 알파벳 출력 : %c\n", input_alpha);
	printf("입력한 알파벳의 아스키코드값 : %d\n", input_alpha);
	return 0;
}