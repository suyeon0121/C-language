#include <stdio.h>

int main(void)
{
	char alphabet, add;
	alphabet = 'A';
	add = alphabet + 5;

	printf("알파벳 대문자를 문자형 변수에 대입 : alphabet = \'A\'\n");
	printf("처음 대입한 알파벳 출력 : %c\n", alphabet);
	printf("처음 알파벳에 5를 더한 알파벳 : %c\n", add);
	printf("변경된 알파벳의 아스키코드값 : %d\n", add);
	return 0;
}