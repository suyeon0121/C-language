#include <stdio.h>

enum season { SP, SM, FA, WI };
char* sname[] = { "spring", "summer", "fall", "winter" };

int main(void)
{
	enum season s;
	s = SM;

	printf("%d��° ������ %s�Դϴ�.\n", s + 1, sname[s]);
	return 0;
}