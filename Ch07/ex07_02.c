#include <stdio.h>

int main(void)
{
	int count;
	
	for (count = 1; count <= 10; count++)
		printf("%d회 출력 : 안녕하세요.\n", count);

	printf("for 문 종료 후 카운트 변수의 값 : %d\n", count);
	return 0;
}