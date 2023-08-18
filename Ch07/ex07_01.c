#include <stdio.h>

int main(void)
{
	int count;

	for (count = 0; count < 10; count++)
		printf("%d회 출력 : 안녕하세요.\n", count + 1);

	return 0;
}