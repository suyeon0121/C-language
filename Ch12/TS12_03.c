#include <stdio.h>
#include <string.h>

int main(void)
{
	char* pc;
	int size = 0;
	char st[30] = { 0 };

	pc = st;

	printf("문자열 입력(30바이트 이내) : ");
	scanf_s("%s", st, sizeof(st));

	size = strlen(st);
	printf("입력한 문자열의 길이 : %d바이트\n", size);

	for (int cnt = 0; cnt < size; cnt++)
		printf("*(ps + %02d) : %c\n", cnt, *(pc + cnt));

	return 0;
}