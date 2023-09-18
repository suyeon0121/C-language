#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int index = 0, cnt = 0;
	char str[] = "korea \t space\n";

	printf("char str[] = \"korea \\t space \\n\"으로 선언\n");

	while (str[index])
	{
		if (iscntrl(str[index]))
			cnt++;
		index++;
	}
	printf("제어 문자는 모두 %d개 존재합니다.\n", cnt);
	return 0;
}