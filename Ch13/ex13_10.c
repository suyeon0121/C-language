#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int index = 0, cnt = 0;
	char str[] = "korea \t space\n";

	printf("char str[] = \"korea \\t space \\n\"���� ����\n");

	while (str[index])
	{
		if (iscntrl(str[index]))
			cnt++;
		index++;
	}
	printf("���� ���ڴ� ��� %d�� �����մϴ�.\n", cnt);
	return 0;
}